/*This is a C++ Program to knapsack problem using dynamic programming. The knapsack problem or rucksack problem is a problem in combinatorial optimization: Given a set of items, each with a mass and a value, determine the number of each item to include in a collection so that the total weight is less than or equal to a given limit and the total value is as large as possible. It derives its name from the problem faced by someone who is constrained by a fixed-size knapsack and must fill it with the most valuable items.*/

// A Dynamic Programming based solution for 0-1 Knapsack problem
#include <iostream>

using namespace std;

// A utility function that returns maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n + 1][W + 1];
    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++)
        {
            for (w = 0; w <= W; w++)
                {
                    if (i == 0 || w == 0)
                        K[i][w] = 0;
                    else if (wt[i - 1] <= w)
                        K[i][w]
                            = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
                    else
                        K[i][w] = K[i - 1][w];
                }
        }
    return K[n][W];
}

int main()
{
    cout << "Enter the number of items in a Knapsack:";
    int n, W;
    cin >> n;
    int val[n], wt[n];
    for (int i = 0; i < n; i++)
        {
            cout << "Enter value and weight for item " << i << ":";
            cin >> val[i];
            cin >> wt[i];
        }
    //    int val[] = { 60, 100, 120 };
    //    int wt[] = { 10, 20, 30 };
    //    int W = 50;
    cout << "Enter the capacity of knapsack";
    cin >> W;
    cout << knapSack(W, wt, val, n);
    return 0;
}

/*
Enter the number of items in a Knapsack:5
Enter value and weight for item 0:11 111
Enter value and weight for item 1:22 121
Enter value and weight for item 2:33 131
Enter value and weight for item 3:44 141
Enter value and weight for item 4:55 151
Enter the capacity of knapsack 300
99