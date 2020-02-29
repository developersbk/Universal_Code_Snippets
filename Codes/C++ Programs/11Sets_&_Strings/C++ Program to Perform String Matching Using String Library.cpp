/*
 * C++ Program to Perform String Matching Using String Library
 */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::string org, dup;
    int result = -1, i = 1;
    std::cout<<"Enter Original String:";
    getline(std::cin, org);
    std::cout<<"Enter Pattern String:";
    getline(std::cin, dup);
    do
        {
            result = org.find(dup, result + 1);
            if (result != -1)
                std::cout<<"\nInstance:"<<i<<"\tPosition:"<<result<<"\t";
            i++;
        }
    while (result >= 0);
    return 0;
}

/*
Enter Original String:All men went to the appall mall
Enter Pattern String:all

Instance:1      Position:23
Instance:2      Position:28