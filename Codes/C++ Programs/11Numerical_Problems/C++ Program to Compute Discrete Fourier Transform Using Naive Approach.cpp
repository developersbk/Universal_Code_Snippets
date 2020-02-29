/*This is a C++ Program to perform Discrete Fourier Transform using Naive approach. In mathematics, the discrete Fourier transform (DFT) converts a finite list of equally spaced samples of a function into the list of coefficients of a finite combination of complex sinusoids, ordered by their frequencies, that has those same sample values. It can be said to convert the sampled function from its original domain (often time or position along a line) to the frequency domain.*/

#include<iostream>
#include<math.h>

using namespace std;

#define PI 3.14159265

class DFT_Coefficient
{
public:
    double real, img;
    DFT_Coefficient()
    {
        real = 0.0;
        img = 0.0;
    }
};
int main(int argc, char **argv)
{
    int N = 10;
    cout << "Discrete Fourier Transform using naive method\n";
    cout << "Enter the coefficient of simple linear function:\n";
    cout << "ax + by = c\n";
    double a, b, c;
    cin >> a >> b >> c;
    double function[N];
    for (int i = 0; i < N; i++)
        {
            function[i] = (((a * (double) i) + (b * (double) i)) - c);
            //System.out.print( "  "+function[i] + "  ");
        }
    cout << "Enter the max K value: ";
    int k;
    cin >> k;
    double cosine[N];
    double sine[N];
    for (int i = 0; i < N; i++)
        {
            cosine[i] = cos((2 * i * k * PI) / N);
            sine[i] = sin((2 * i * k * PI) / N);
        }
    DFT_Coefficient dft_val[k];
    cout << "The coefficients are: ";
    for (int j = 0; j < k; j++)
        {
            for (int i = 0; i < N; i++)
                {
                    dft_val[j].real += function[i] * cosine[i];
                    dft_val[j].img += function[i] * sine[i];
                }
            cout << "(" << dft_val[j].real << ") - " << "(" << dft_val[j].img << " i)\n";
        }
}

/*

Discrete Fourier Transform using naive method
Enter the coefficient of simple linear function:
ax + by = c
1 2 3
Enter the max K value: 20
The coefficients are:
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)
(105) - (-1.03386e-005 i)