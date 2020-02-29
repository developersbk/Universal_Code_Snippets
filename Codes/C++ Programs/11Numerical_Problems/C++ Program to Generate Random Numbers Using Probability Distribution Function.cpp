/*This is a C++ Program to generate random numbers using Probability Distribution Function. Probability distribution is based on probability density function. a probability density function (pdf), or density of a continuous random variable, is a function that describes the relative likelihood for this random variable to take on a given value. The probability of the random variable falling within a particular range of values is given by the integral of this variable’s density over that range—that is, it is given by the area under the density function but above the horizontal axis and between the lowest and greatest values of the range.*/

//pdf(x) = 1 if x>360
//       = 0 if x<0
//       = x/360 otherwise
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

//This is a sample program to generate a random numbers based on probability desity function of spiner
//pdf(x) = 1 if x>360
//       = 0 if x<0
//       = x/360 otherwise
int N = 10;
int main(int argc, char **argv)
{
    int p = 0;
    for (int i = 0; i < N; i++)
        {
            p = rand() % 400;
            if (p > 360)
                cout << 0 << " ";
            else if (p < 0)
                cout << 0 << " ";
            else
                cout << p * 0.1 / 360 << " ";
        }
    cout << "...";
}

/*
0.0113889 0.0186111 0.0927778 0.0277778 0 0.0344444 0.0772222 0.0438889 0.045 0.0177778 ...