/*
This is a Java Program to Implement Horner Algorithm. Horner’s method is an efficient method for calculating polynomials.
*/

/**
 ** Java Program to implement Horner Algorithm
 **/

import java.util.Scanner;

public class Horner
{
    private int sum;
    /** constructor **/
    public Horner(int[] cof, int x)
    {
        sum = 0;
        calcSum(cof, x, cof.length - 1);
        display();
    }
    /** Calculate sum **/
    private void calcSum(int[] cof, int x, int N)
    {
        sum = cof[N] * x;
        for (int i = N - 1; i >= 1; i--)
            sum = (sum + cof[i]) * x;
        sum += cof[0];
    }
    public void display()
    {
        System.out.println("Evaluated sum = "+ sum);
    }
    /** main method **/
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Horner Algorithm Test\n");
        System.out.println("Enter highest power");
        int n = scan.nextInt();
        int[] arr = new int[n + 1];
        System.out.println("\nEnter "+ (n + 1) +" coefficients in increasing order");
        for (int i = 0; i <= n; i++)
            arr[i] = scan.nextInt();
        System.out.println("\nEnter x");
        int x = scan.nextInt();
        Horner h = new Horner(arr, x);
    }
}

/*
Enter highest power
5

Enter 6 coefficients in increasing order
1 2 3 4 5 6

Enter x
2
Evaluated sum = 321
