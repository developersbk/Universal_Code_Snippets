/*
 * C++ Program to Implement the String Search Algorithm for
 * Short Text Sizes
 */

//enter string without spaces
#include<iostream>
using namespace std;

int main()
{
    char org[100], dup[100];
    int i, j, k = 0, len_org, len_dup;
    cout<<"NOTE:Strings are accepted only till blank space.";
    cout<<"\nEnter Original String:";
    fflush(stdin);
    cin>>org;
    fflush(stdin);
    cout<<"Enter Pattern to Search:";
    cin>>dup;
    len_org = strlen(org);
    len_dup = strlen(dup);
    for (i = 0; i <= (len_org - len_dup); i++)
        {
            for (j = 0; j < len_dup; j++)
                {
                    //cout<<"comparing '"<<org[i + j]<<"' and '"<<dup[j]<<"'.";
                    if (org[i + j] != dup[j])
                        break ;
                }
            if (j == len_dup)
                {
                    k++;
                    cout<<"\nPattern Found at Position: "<<i;
                }
        }
    if (k == 0)
        cout<<"\nError:No Match Found!";
    else
        cout<<"\nTotal Instances Found = "<<k;
    return 0;
}

/*

NOTE:Strings are accepted only till blank space.
Enter Original String:allmenwenttoapall mall
Enter Pattern to Search:all

Pattern Found at Position: 0
Pattern Found at Position: 14
Total Instances Found = 2