#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
    int val = rand();
    char Hex[33];
    itoa(val, Hex, 16);
    cout<< "Random Decimal Byte:" << val;
    cout << "\nEquivalent Hex Byte: " << Hex;
}

/*
Random Decimal Byte:41
Equivalent Hex Byte: 29