Universal image format convertion

typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned char uchar;

struct UlFormatData
{
public:
    int BytesPP;

    ulong BitMask[4]; // A bit mask in source A8R8G8B8 picture.
    int ShiftR[4]; // Can be < 0 for left shift operation.

public:
    ulong CreateBitMask(int aStartPosition, int aSize)
    {
        ulong result = 0;
        UlFor (int i = 0; i < aSize; i++)
        {
            result = (result >> 1) | 0x80000000;
        }
        result = result >> aStartPosition;
        return result;
    }

    UlFormatData(const char *format_str)
    {
        BytesPP = 0;
        for (int i = 0; i < 4; i++)
        {
            ShiftR[i] = 0;
            BitMask[i] = 0; // Exclude color if not in use.
        }

        // Count destination's bits per pixel.
        int bitsPP = 0;
        UlFor (const char *temp = format_str; *temp; temp++)
        {
            if ('0' <= *temp && *temp <= '9')
                bitsPP += *temp - '0';
        }

        // Main loop: trace format_str and calculate masks and shifts.
        int bitsPassed = 0;
        int currentIndex = 0; // Index for any 'argb' order.

        while (*format_str)
        {
            char color = *(format_str++);
            char numberOfBits = *(format_str++) - '0';

            int sourceColorStart =
            color == 'A' || color == 'X' ? 0 :
            color == 'R' ? 8 :
            color == 'G' ? 16 :
            color == 'B' ? 24 : 32;

            BitMask[currentIndex] = CreateBitMask(sourceColorStart, numberOfBits);
            ShiftR[currentIndex] = bitsPassed - sourceColorStart + (32 - bitsPP);

            bitsPassed += numberOfBits;
            currentIndex++;
        }

        BytesPP = bitsPP / 8;
    }
};

//------------------------------------------------------------------------------
// There is no 24-bit type in C++, so...

struct UlBits24
{
    char b[3];
};

//------------------------------------------------------------------------------
// Template function that will copy a line of image into destination with
//    adequate conversion.

template <class dsttype>
static inline void CopyARGBLine(const ulong *srcline, dsttype *dstline,
    const UlFormatData &aFormatData, int width)
{
    for (int x = 0; x < width; x++)
    {
        ulong temp = *(srcline++);
        ulong result = 0;
        UlFor (int i = 0; i < 4; i++)
        {
            result |= ((temp & aFormatData.BitMask[i]) >>
                aFormatData.ShiftR[i]);
        }
        *(dstline++) = *(dsttype *)(&result);
    }
}

//------------------------------------------------------------------------------
void ConvertFromA8R8G8B8(const ulong *aSource, int width, int height,
    const UlFormatData &aFormatData, uchar *aData, int aPitch)
{
    for (int y = 0; y < height; y++)
    {
        const ulong *line = aSource + (y * width);
        uchar *dstline = aData + (y * aPitch);

        switch (aFormatData.BytesPP)
        {
        case 1:
            CopyARGBLine<uchar>(line, (uchar *)dstline, aFormatData, width);
            break;
        case 2:
            CopyARGBLine<ushort>(line, (ushort *)dstline, aFormatData, width);
            break;
        case 3:
            CopyARGBLine<UlBits24>(line, (UlBits24 *)dstline,
                aFormatData, width);
            break;
        case 4:
            CopyARGBLine<ulong>(line, (ulong *)dstline, aFormatData, width);
            break;
        default:
            throw "Incorrect destination image format";
        }
    }
}
