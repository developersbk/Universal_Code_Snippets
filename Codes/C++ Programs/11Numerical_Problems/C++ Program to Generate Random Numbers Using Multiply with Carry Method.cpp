/*This is a C++ Program to generate random numbers using Multiply with Carry method. In computer science, multiply-with-carry (MWC) is a method invented by George Marsaglia for generating sequences of random integers based on an initial set from two to many thousands of randomly chosen seed values. The main advantages of the MWC method are that it invokes simple computer integer arithmetic and leads to very fast generation of sequences of random numbers with immense periods, ranging from around 260 to 22000000.*/

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
    int max_Sequence_Elements = 10;
    int base_b = 2000;
    int multiplier_a = rand() % base_b;
    int r = 1;
    int c[max_Sequence_Elements];
    int x[max_Sequence_Elements];
    c[0] = rand() % multiplier_a;
    x[0] = rand() % base_b;
    cout << "The random number sequence is: " << x[0];
    //generating sequence
    for (int i = 1; i < max_Sequence_Elements; i++)
        {
            x[i] = (multiplier_a * x[i - r] + c[i - 1]) % base_b;
            c[i] = (multiplier_a * x[i - r] + c[i - 1]) / base_b;
            cout << " " << x[i];
        }
    cout << "...";
}

/*
The random number sequence is: 334 1711 157 472 1355 1564 151 223 1146 990...