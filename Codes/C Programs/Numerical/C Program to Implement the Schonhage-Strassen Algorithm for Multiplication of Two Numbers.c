/*
This is a C Program to multiply two given numbers using Schonhage-Strassen Algorithm. Suppose we are multiplying two numbers like 123 and 456 using long multiplication with base B digits, but without performing any carrying. The result might look something like this:
0 1 2 3
× 4 5 6
———————
00 00 06 12 18
00 05 10 15 00
04 08 12 00 00
———————
04 13 28 27 18
This sequence (4, 13, 28, 27, 18) is called the acyclic or linear convolution of the two original sequences (1,2,3) and (4,5,6). Once you have the acyclic convolution of two sequences, computing the product of the original numbers is easy: you just perform the carrying (for example, in the rightmost column, you’d keep the 8 and add the 1 to the column containing 27). In the example this yields the correct product 56088.
*/

int noOfDigit(long a)
{
    int n = 0;
    while (a > 0)
        {
            a /= 10;
            n++;
        }
    return n;
}
void schonhageStrassenMultiplication(long x, long y, int n, int m)
{
    int i, j;
    int linearConvolution[n + m - 1];
    for (i = 0; i < (n + m - 1); i++)
        linearConvolution[i] = 0;
    long p = x;
    for (i = 0; i < m; i++)
        {
            x = p;
            for (j = 0; j < n; j++)
                {
                    linearConvolution[i + j] += (y % 10) * (x % 10);
                    x /= 10;
                }
            y /= 10;
        }
    printf("The Linear Convolution is: ( ");
    for (i = (n + m - 2); i >= 0; i--)
        {
            printf("%d ", linearConvolution[i]);
        }
    printf(")");
    long product = 0;
    int nextCarry = 0, base = 1;
    for (i = 0; i < n + m - 1; i++)
        {
            linearConvolution[i] += nextCarry;
            product = product + (base * (linearConvolution[i] % 10));
            nextCarry = linearConvolution[i] / 10;
            base *= 10;
        }
    printf("The Product of the numbers is: %ld", product);
}
int main(int argc, char **argv)
{
    printf("Enter the numbers:");
    long a, b;
    scanf("%ld", &a);
    scanf("%ld", &b);
    int n = noOfDigit(a);
    int m = noOfDigit(b);
    schonhageStrassenMultiplication(a, b, n, m);
}