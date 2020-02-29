/*This is a C++ Program to solve 0-1 knapsack problem. The knapsack problem or rucksack problem is a problem in combinatorial optimization: Given a set of items, each with a mass and a value, determine the number of each item to include in a collection so that the total weight is less than or equal to a given limit and the total value is as large as possible. It derives its name from the problem faced by someone who is constrained by a fixed-size knapsack and must fill it with the most valuable items.*/

#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

// A utility function that returns maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    // Base Case
    if (n == 0 || W == 0)
        return 0;
    // If weight of the nth item is more than Knapsack capacity W, then
    // this item cannot be included in the optimal solution
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    // Return the maximum of two cases: (1) nth item included (2) not included
    else
        return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1),
                   knapSack(W, wt, val, n - 1));
}

// Driver program to test above function
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