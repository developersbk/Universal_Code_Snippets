/*This is a C++ Program to multiply two signed numbers using booth’s algorithm. Booth’s multiplication algorithm is a multiplication algorithm that multiplies two signed binary numbers in two’s complement notation. Booth used desk calculators that were faster at shifting than adding and created the algorithm to increase their speed. Booth’s algorithm is of interest in the study of computer architecture.*/

#include<iostream>
#include<conio.h>

using namespace std;

void add(int a[], int x[], int qrn);
void complement(int a[], int n)
{
    int i;
    int x[8] = { NULL };
    x[0] = 1;
    for (i = 0; i < n; i++)
        {
            a[i] = (a[i] + 1) % 2;
        }
    add(a, x, n);
}

void add(int ac[], int x[], int qrn)
{
    int i, c = 0;
    for (i = 0; i < qrn; i++)
        {
            ac[i] = ac[i] + x[i] + c;
            if (ac[i] > 1)
                {
                    ac[i] = ac[i] % 2;
                    c = 1;
                }
            else
                c = 0;
        }
}

void ashr(int ac[], int qr[], int &qn, int qrn)
{
    int temp, i;
    temp = ac[0];
    qn = qr[0];
    cout << "\t\tashr\t\t";
    for (i = 0; i < qrn - 1; i++)
        {
            ac[i] = ac[i + 1];
            qr[i] = qr[i + 1];
        }
    qr[qrn - 1] = temp;
}

void display(int ac[], int qr[], int qrn)
{
    int i;
    for (i = qrn - 1; i >= 0; i--)
        cout << ac[i];
    cout << " ";
    for (i = qrn - 1; i >= 0; i--)
        cout << qr[i];
}

int main(int argc, char **argv)
{
    int mt[10], br[10], qr[10], sc, ac[10] = { 0 };
    int brn, qrn, i, qn, temp;
    cout
            << "\n--Enter the multiplicand and multipier in signed 2's complement form if negative--";
    cout << "\n Number of multiplicand bit=";
    cin >> brn;
    cout << "\nmultiplicand=";
    for (i = brn - 1; i >= 0; i--)
        cin >> br[i]; //multiplicand
    for (i = brn - 1; i >= 0; i--)
        mt[i] = br[i]; // copy multipier to temp array mt[]
    complement(mt, brn);
    cout << "\nNo. of multiplier bit=";
    cin >> qrn;
    sc = qrn; //sequence counter
    cout << "Multiplier=";
    for (i = qrn - 1; i >= 0; i--)
        cin >> qr[i]; //multiplier
    qn = 0;
    temp = 0;
    cout << "qn\tq[n+1]\t\tBR\t\tAC\tQR\t\tsc\n";
    cout << "\t\t\tinitial\t\t";
    display(ac, qr, qrn);
    cout << "\t\t" << sc << "\n";
    while (sc != 0)
        {
            cout << qr[0] << "\t" << qn;
            if ((qn + qr[0]) == 1)
                {
                    if (temp == 0)
                        {
                            add(ac, mt, qrn);
                            cout << "\t\tsubtracting BR\t";
                            for (i = qrn - 1; i >= 0; i--)
                                cout << ac[i];
                            temp = 1;
                        }
                    else if (temp == 1)
                        {
                            add(ac, br, qrn);
                            cout << "\t\tadding BR\t";
                            for (i = qrn - 1; i >= 0; i--)
                                cout << ac[i];
                            temp = 0;
                        }
                    cout << "\n\t";
                    ashr(ac, qr, qn, qrn);
                }
            else if (qn - qr[0] == 0)
                ashr(ac, qr, qn, qrn);
            display(ac, qr, qrn);
            cout << "\t";
            sc--;
            cout << "\t" << sc << "\n";
        }
    cout << "Result=";
    display(ac, qr, qrn);
}

/*
--Enter the multiplicand and multipier in signed 2's complement form if negative--
Number of multiplicand bit=5
Multiplicand=1 0 1 1 1

Number of multiplier bit=5
Multiplier=1 0 0 1 1

qn	q[n+1]		BR		AC	QR		sc
			initial		00000 10011		5
1	0		subtracting BR	01001
			ashr		00100 11001		4
1	1		ashr		00010 01100		3
0	1		adding BR	11001
			ashr		11100 10110		2
0	0		ashr		11110 01011		1
1	0		subtracting BR	00111
			ashr		00011 10101		0

Result=00011 10101