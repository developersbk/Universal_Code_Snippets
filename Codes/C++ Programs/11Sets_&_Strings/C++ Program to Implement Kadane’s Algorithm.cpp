#include <iostream>
#include <climits>
using namespace std;

#define MAX(X, Y) (X > Y) ? X : Y
#define POS(X) (X > 0) ? X : 0

int maxSum = INT_MIN;
int N;
int kadane(int* row, int len)
{
    int x, sum, maxSum = INT_MIN;
    for (sum = POS(row[0]), x = 0; x < N; ++x, sum = POS(sum + row[x]))
        maxSum = MAX(sum, maxSum);
    return maxSum;
}

int main()
{
    cout << "Enter the array length: ";
    cin >> N;
    int arr[N];
    cout << "Enter the array: ";
    for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
    cout << "The Max Sum is: "<<kadane(arr, N) << endl;
    return 0;
}

/*
Enter the array length: 5
Enter the array: 1 -5 2 -1 3
The Max Sum is: 4

Enter the array length: 9
Enter the array: -2 1 -3 4 -1 2 1 -5 4
The Max Sum is: 6