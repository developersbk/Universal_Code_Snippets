/*This is a C++ Program to find GCD of two numbers using Recursive Euclid Algorithm. In mathematics, the Euclidean algorithm, or Euclid’s algorithm, is a method for computing the greatest common divisor (GCD) of two (usually positive) integers, also known as the greatest common factor (GCF) or highest common factor (HCF). It is named after the Greek mathematician Euclid, who described it in Books VII and X of his Elements.
The GCD of two positive integers is the largest integer that divides both of them without leaving a remainder (the GCD of two integers in general is defined in a more subtle way).

In its simplest form, Euclid’s algorithm starts with a pair of positive integers, and forms a new pair that consists of the smaller number and the difference between the larger and smaller numbers. The process repeats until the numbers in the pair are equal. That number then is the greatest common divisor of the original pair of integers.

The main principle is that the GCD does not change if the smaller number is subtracted from the larger number. For example, the GCD of 252 and 105 is exactly the GCD of 147 (= 252 – 105) and 105. Since the larger of the two numbers is reduced, repeating this process gives successively smaller numbers, so this repetition will necessarily stop sooner or later — when the numbers are equal (if the process is attempted once more, one of the numbers will become 0).*/


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
int gcd(int u, int v)
{
    return (v != 0) ? gcd(v, u % v) : u;
}

int main(void)
{
    int num1, num2, result;
    cout << "Enter two numbers to find GCD using Euclidean algorithm: ";
    cin >> num1 >> num2;
    result = gcd(num1, num2);
    if (gcd)
        cout << "\nThe GCD of " << num1 << " and " << num2 << " is: " << result
             << endl;
    else
        cout << "\nInvalid input!!!\n";
    return 0;
}

/*
Enter two numbers to find GCD using Euclidean algorithm: 12 30
The GCD of 12 and 30 is: 6