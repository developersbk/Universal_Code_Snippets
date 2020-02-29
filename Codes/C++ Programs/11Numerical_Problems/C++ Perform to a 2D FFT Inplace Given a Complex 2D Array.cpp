/*This is a C++ Program to perform 2D FFT. A fast Fourier transform (FFT) is an algorithm to compute the discrete Fourier transform (DFT) and its inverse. Fourier analysis converts time (or space) to frequency and vice versa; an FFT rapidly computes such transformations by factorizing the DFT matrix into a product of sparse (mostly zero) factors.*/

#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.14159265
int n;

int main(int argc, char **argv)
{
    cout << "Enter the size: ";
    cin >> n;
    double inputData[n][n];
    cout << "Enter the 2D elements ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> inputData[i][j];
    double realOut[n][n];
    double imagOut[n][n];
    double amplitudeOut[n][n];
    int height = n;
    int width = n;
    // Two outer loops iterate on output data.
    for (int yWave = 0; yWave < height; yWave++)
        {
            for (int xWave = 0; xWave < width; xWave++)
                {
                    // Two inner loops iterate on input data.
                    for (int ySpace = 0; ySpace < height; ySpace++)
                        {
                            for (int xSpace = 0; xSpace < width; xSpace++)
                                {
                                    // Compute real, imag, and ampltude.
                                    realOut[yWave][xWave] += (inputData[ySpace][xSpace] * cos(
                                                                  2 * PI * ((1.0 * xWave * xSpace / width) + (1.0
                                                                            * yWave * ySpace / height)))) / sqrt(
                                                                 width * height);
                                    imagOut[yWave][xWave] -= (inputData[ySpace][xSpace] * sin(
                                                                  2 * PI * ((1.0 * xWave * xSpace / width) + (1.0
                                                                            * yWave * ySpace / height)))) / sqrt(
                                                                 width * height);
                                    amplitudeOut[yWave][xWave] = sqrt(
                                                                     realOut[yWave][xWave] * realOut[yWave][xWave]
                                                                     + imagOut[yWave][xWave]
                                                                     * imagOut[yWave][xWave]);
                                }
                            cout << realOut[yWave][xWave] << " + " << imagOut[yWave][xWave]
                                 << " i (" << amplitudeOut[yWave][xWave] << ")\n";
                        }
                }
        }
}

/*
Enter the size:
2
Enter the 2D elements
2 3
4 2

2.5 + 0.0 i
5.5 + 0.0 i
-0.5 + -1.8369701987210297E-16 i
0.5 + -3.0616169978683826E-16 i
2.5 + 0.0 i
-0.5 + -3.6739403974420594E-16 i
-0.5 + -1.8369701987210297E-16 i
-1.5 + -1.8369701987210297E-16 i