#include<conio.h>
#include<iostream>
#include<math.h>

using namespace std;
double d = 0;
double det(int n, double mat[10][10]);
double det(int n, double mat[10][10])
{
    double submat[10][10];
    if (n == 2)
        return ((mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    else
        {
            for (int c = 0; c < n; c++)
                {
                    int subi = 0; //submatrix's i value
                    for (int i = 1; i < n; i++)
                        {
                            int subj = 0;
                            for (int j = 0; j < n; j++)
                                {
                                    if (j == c)
                                        continue;
                                    submat[subi][subj] = mat[i][j];
                                    subj++;
                                }
                            subi++;
                        }
                    d = d + (pow(-1, c) * mat[0][c] * det(n - 1, submat));
                }
        }
    return d;
}
int main(int argc, char **argv)
{
    cout << "Enter the number of vectors:\n";
    int n;
    cin >> n;
    double mat[10][10];
    cout << "Enter the vectors one by one:\n";
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                {
                    cin >> mat[j][i];
                }
        }
    d = det(n, mat);
    if (d != 0)
        cout << "The vectors forms the basis of R" << n
             << " as the determinant is non-zero";
    else
        cout << "The vectors doesn't form the basis of R" << n
             << " as the determinant is zero";
}

/*
Enter the number of vectors:
3
Enter the vectors one by one:
1 2 3
2 3 4
3 4 5
The vectors doesn't form the basis of R3 as the determinant is zero

Enter the number of vectors:
4
Enter the vectors one by one:
2 3 5 8
1 6 2 9
3 4 2 7
2 5 3 9
The vectors forms the basis of R4 as the determinant is non-zero