#include <iostream>
#include <cstdlib>
#include <time.h>

const int LOW = 1;
const int HIGH = 32000;

using namespace std;

int main()
{
    int randomNumber;
    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);
    for (int i = 0; i < 10; i++)
        {
            randomNumber = rand() % (HIGH - LOW + 1) + LOW;
            cout << randomNumber << " ";
        }
    cout << "...";
    return 0;
}

/*
312 7423 23444 16008 31816 1823 29315 17424 11753 18384 ...