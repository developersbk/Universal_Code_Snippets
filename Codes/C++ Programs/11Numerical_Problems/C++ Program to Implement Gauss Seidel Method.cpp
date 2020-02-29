#include<iostream>
#include<conio.h>

using namespace std;

int main(void)
{
    float a[10][10], b[10], x[10], y[10];
    int n = 0, m = 0, i = 0, j = 0;
    cout << "Enter size of 2d array(Square matrix) : ";
    cin >> n;
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                {
                    cout << "Enter values no :(" << i << ", " << j << ") ";
                    cin >> a[i][j];
                }
        }
    cout << "\nEnter Values to the right side of equation\n";
    for (i = 0; i < n; i++)
        {
            cout << "Enter values no :(" << i << ", " << j << ") ";
            cin >> b[i];
        }
    cout << "Enter initial values of x\n";
    for (i = 0; i < n; i++)
        {
            cout << "Enter values no. :(" << i<<"):";
            cin >> x[i];
        }
    cout << "\nEnter the no. of iteration : ";
    cin >> m;
    while (m > 0)
        {
            for (i = 0; i < n; i++)
                {
                    y[i] = (b[i] / a[i][i]);
                    for (j = 0; j < n; j++)
                        {
                            if (j == i)
                                continue;
                            y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                            x[i] = y[i];
                        }
                    printf("x%d = %f    ", i + 1, y[i]);
                }
            cout << "\n";
            m--;
        }
    return 0;
}

/*
Enter size of 2d array(Square matrix) : 3
Enter values no :(0, 0) 2
Enter values no :(0, 1) 3
Enter values no :(0, 2) 1
Enter values no :(1, 0) 5
Enter values no :(1, 1) 4
Enter values no :(1, 2) 6
Enter values no :(2, 0) 8
Enter values no :(2, 1) 7
Enter values no :(2, 2) 9

Enter Values to the right side of equation
Enter values no :(0, 3) 2
Enter values no :(1, 3) 3
Enter values no :(2, 3) 4

Enter initial values of x
Enter values no. :(0): 0
Enter values no. :(1): 0
Enter values no. :(2): 0

Enter the no. of iteration : 4
x1 = 1.000000    x2 = -0.500000    x3 = -0.055556
x1 = 1.777778    x2 = -1.388889    x3 = -0.055556
x1 = 3.111111    x2 = -3.055555    x3 = 0.055555
x1 = 5.555555    x2 = -6.277777    x3 = 0.388889