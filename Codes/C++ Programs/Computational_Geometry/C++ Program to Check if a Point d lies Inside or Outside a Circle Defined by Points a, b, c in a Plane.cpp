/*This is a C++ Program to Check if a Point d lies Inside or Outside a Circle Defined by Points a, b, c in a Plane. For any point t (xt, yt) on the plane, its position with respect to the circle defined by 3 points (x1, y1) , (x2, y2), (x3, y3).
s = (x-xt)^2 + (y-yt)^2 – r*r
If s < 0, t lies inside the circle; if s > 0, t lies outside the circle; if s = 0, t lies on the circle.*/

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
    double x1, x2, y1, y2, x3, y3;
    double m1, m2, c1, c2, r;
    x1 = rand() % (HIGH - LOW + 1) + LOW;
    x2 = rand() % (HIGH - LOW + 1) + LOW;
    x3 = rand() % (HIGH - LOW + 1) + LOW;
    y1 = rand() % (HIGH - LOW + 1) + LOW;
    y2 = rand() % (HIGH - LOW + 1) + LOW;
    y3 = rand() % (HIGH - LOW + 1) + LOW;
    m1 = (y1 - y2) / (x1 - x2);
    m2 = (y3 - y2) / (x3 - x2);
    c1 = ((m1 * m2 * (y3 - y1)) + (m1 * (x2 + x3)) - (m2 * (x1 + x2))) / (2
            * (m1 - m2));
    c2 = ((((x1 + x2) / 2) - c1) / (-1 * m1)) + ((y1 + y2) / 2);
    r = sqrt(((x3 - c1) * (x3 - c1)) + ((y3 - c2) * (y3 - c2)));
    cout << "The points on the circle are: (" << x1 << ", " << y1 << "), ("
         << x2 << ", " << y2 << "), (" << x3 << ", " << y3 << ")";
    cout << "\nThe center of the circle is (" << c1 << ", " << c2
         << ") and radius is " << r;
    cout << "\nEnter the point : <x>,<y>";
    int x, y;
    cin >> x;
    cin >> y;
    double s = ((x - c1) * (x - c1)) + ((y - c2) * (y - c1)) - (r * r);
    if (s < 0)
        cout << "\nThe point lies inside the circle";
    else if (s > 0)
        cout << "\nThe point lies outside the circle";
    else
        cout << "\nThe point lies on the circle";
    return 0;
}

/*

The points on the circle are: (2, 5), (10, 8), (3, 6)
The center of the circle is (8.7, 13.7) and radius is 9.58019
Enter the point : <x>,<y> 1 2

The point lies outside the circle

The points on the circle are: (0, 6), (9, 7), (6, 10)
The center of the circle is (4.6, 7.4) and radius is 2.95296
Enter the point : <x>,<y>6 5

The point lies inside the circle