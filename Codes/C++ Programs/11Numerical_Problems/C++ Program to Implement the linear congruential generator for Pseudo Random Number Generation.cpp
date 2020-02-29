/*This is a C++ Program to generate random numbers using Linear Congruential Generator. A linear congruential generator (LCG) is an algorithm that yields a sequence of pseudo-randomized numbers calculated with a discontinuous piecewise linear equation. The method represents one of the oldest and best-known pseudorandom number generator algorithms. The theory behind them is relatively easy to understand, and they are easily implemented and fast, especially on computer hardware which can provide modulo arithmetic by storage-bit truncation.*/

#include <iostream>

using namespace std;

class mRND
{
public:
    void seed(unsigned int s)
    {
        _seed = s;
    }

protected:
    mRND() :
        _seed(0), _a(0), _c(0), _m(2147483648)
    {
    }
    int rnd()
    {
        return (_seed = (_a * _seed + _c) % _m);
    }

    int _a, _c;
    unsigned int _m, _seed;
};

class MS_RND: public mRND
{
public:
    MS_RND()
    {
        _a = 214013;
        _c = 2531011;
    }
    int rnd()
    {
        return mRND::rnd() >> 16;
    }
};

class BSD_RND: public mRND
{
public:
    BSD_RND()
    {
        _a = 1103515245;
        _c = 12345;
    }
    int rnd()
    {
        return mRND::rnd();
    }
};

int main(int argc, char* argv[])
{
    BSD_RND bsd_rnd;
    MS_RND ms_rnd;
    cout << "MS RAND:" << endl << "========" << endl;
    for (int x = 0; x < 10; x++)
        cout << ms_rnd.rnd() << endl;
    cout << endl << "BSD RAND:" << endl << "=========" << endl;
    for (int x = 0; x < 10; x++)
        cout << bsd_rnd.rnd() << endl;
    return 0;
}

/*
MS RAND:
========
38
7719
21238
2437
8855
11797
8365
32285
10450
30612

BSD RAND:
=========
12345
1406932606
654583775
1449466924
229283573
1109335178
1051550459
1293799192
794471793
551188310