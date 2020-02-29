#include <iostream>
int main()
{
    int n, sum = 0, remainder;
    cout<<"Enter an integer\n";
    cin>>n;
    while(n != 0)
        {
            remainder = n % 10;
            /*stores unit place digit to remainder*/
            sum = sum + remainder;
            n = n / 10;
            /*dividing no to discard unit place digit*/
        }
    cout<<"Sum of digits of entered number = "<<sum<<endl;
    return 0;
}