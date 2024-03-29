#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
    cout << "Enter the dimension of the matrices: ";
    int n;
    cin >> n;
    cout << "Enter the 1st matrix: ";
    double a[n][n];
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                {
                    cin >> a[i][j];
                }
        }
    cout << "Enter the 2nd matrix: ";
    double b[n][n];
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                {
                    cin >> b[i][j];
                }
        }
    cout << "Enter the result matrix: ";
    double c[n][n];
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                {
                    cin >> c[i][j];
                }
        }
    //random generation of the r vector containing only 0/1 as its elements
    double r[n][1];
    for (int i = 0; i < n; i++)
        {
            r[i][0] = rand() % 2;
            cout << r[i][0] << " ";
        }
    //test A * (b*r) - (C*) = 0
    double br[n][1];
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 1; j++)
                {
                    for (int k = 0; k < n; k++)
                        {
                            br[i][j] = br[i][j] + b[i][k] * r[k][j];
                        }
                }
        }
    double cr[n][1];
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 1; j++)
                {
                    for (int k = 0; k < n; k++)
                        {
                            cr[i][j] = cr[i][j] + c[i][k] * r[k][j];
                        }
                }
        }
    double abr[n][1];
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 1; j++)
                {
                    for (int k = 0; k < n; k++)
                        {
                            abr[i][j] = abr[i][j] + a[i][k] * br[k][j];
                        }
                }
        }
    //    br = multiplyVector(b, r, n);
    //    cr = multiplyVector(c, r, n);
    //    abr = multiplyVector(a, br, n);
    //abr-cr
    for (int i = 0; i < n; i++)
        {
            abr[i][0] -= cr[i][0];
        }
    bool flag = true;
    for (int i = 0; i < n; i++)
        {
            if (abr[i][0] == 0)
                continue;
            else
                flag = false;
        }
    if (flag == true)
        cout << "Yes";
    else
        cout << "No";
}

/*

Enter the dimension of the matrices: 2
Enter the 1st matrix:
1 2
2 3
Enter the 2nd matrix:
1 3
3 4
Enter the result matrix:
9 9
14 15

Yes

Enter the dimesion of the matrices:
2
Enter the 1st matrix:
2 3
3 4
Enter the 2st matrix:
1 0
1 2
Enter the result matrix:
6 5
8 7

Yes