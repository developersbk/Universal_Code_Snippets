/*This is a C++ Program to check whether point lies above, below or on the line. For any point t (xt, yt) on the plane, its position with respect to the line L connecting p and q is found by calculating the scalar s:
s = A xt + B yt + C
If s < 0, t lies in the clockwise halfplane of L; if s > 0, t lies on the counter-clockwise halfplane; if s = 0, t lies on L.
For example, the equation of the line connecting points (2, 2) and (4, 5) is -3x + 2y + 2 = 0. The point (6, 3) lies in the clockwise halfplane of this line, because (-3)(6) + (2)(3) + 2 = -10. Conversely, the point (0, 5) lies in the other halfplane as (-3)(0) +(2)(5) +2 = 12.*/

#include<time.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>

using namespace std;
const int LOW = 0;
const int HIGH = 10;
int main(int argc, char **argv)
{
    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);
    int x1, x2, y1, y2;
    x1 = rand() % (HIGH - LOW + 1) + LOW;
    x2 = rand() % (HIGH - LOW + 1) + LOW;
    y1 = rand() % (HIGH - LOW + 1) + LOW;
    y2 = rand() % (HIGH - LOW + 1) + LOW;
    cout << "The Equation of the 1st line is : (" << (y2 - y1) << ")x+(" << (x1
            - x2) << ")y+(" << (x2 * y1 - x1 * y2) << ") = 0\n";
    int x, y;
    cout << "\nEnter the point:";
    cin >> x;
    cin >> y;
    int s = (y2 - y1) * x + (x1 - x2) * y + (x2 * y1 - x1 * y2);
    if (s < 0)
        cout << "The point lies below the line or left side of the line";
    else if (s > 0)
        cout << "The point lies above the line or right side of the line";
    else
        cout << "The point lies on the line";
    return 0;
}

/*
The Equation of the 1st line is : (3)x+(0)y+(-3) = 0

Enter the point:1 4
The point lies on the line

The Equation of the 1st line is : (5)x+(-1)y+(-25) = 0

Enter the point:1 1
The point lies below the line or left side of the line

The Equation of the 1st line is : (-6)x+(8)y+(-24) = 0

Enter the point:19 21
The point lies above the line or right side of the line