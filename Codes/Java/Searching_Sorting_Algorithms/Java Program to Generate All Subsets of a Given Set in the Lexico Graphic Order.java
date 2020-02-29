/*This is a java program to generate and print all the subsets of a given set as per lexicographical order, here we follow the numerical sequence. First generate all the subsets having only one element, then generate all the subsets having two elements and so on.*/

//This is a java program to generate all permutation of n elements in lexicographic order
import java.util.Random;
import java.util.Scanner;

public class Lexicographic_Permutation
{
    public static int[] lexicographicOrder(int N)
    {
        int[] binary = new int[(int) Math.pow(2, N)];
        for (int i = 0; i < Math.pow(2, N); i++)
            {
                int b = 1;
                binary[i] = 0;
                int num = i;
                while (num > 0)
                    {
                        binary[i] += (num % 2) * b;
                        num /= 2;
                        b = b * 10;
                    }
            }
        return binary;
    }

    public static void main(String args[])
    {
        Random random = new Random();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the set: ");
        int N = sc.nextInt();
        int[] sequence = new int[N];
        for (int i = 0; i < N; i++)
            sequence[i] = Math.abs(random.nextInt(100));
        System.out.println("The elements in the set : ");
        for (int i = 0; i < N; i++)
            System.out.print(sequence[i] + " ");
        for (int i = 1; i < N; i++)
            {
                int j = i;
                int temp = sequence[i];
                while (j > 0 && temp < sequence[j - 1])
                    {
                        sequence[j] = sequence[j - 1];
                        j = j - 1;
                    }
                sequence[j] = temp;
            }
        int[] mask = new int[(int) Math.pow(2, N)];
        mask = lexicographicOrder(N);
        System.out.println("\nThe permutations are: ");
        for (int i = 0; i < Math.pow(2, N); i++)
            {
                System.out.print("{ ");
                for (int j = 0; j < N; j++)
                    {
                        if (mask[i] % 10 == 1)
                            System.out.print(sequence[j] + " ");
                        mask[i] /= 10;
                    }
                System.out.println("}");
            }
        sc.close();
    }
}

/*

Enter the number of elements in the set:
5
The elements in the set :
19 3 37 7 22
The permutations are:
{ }
{ 3 }
{ 7 }
{ 19 }
{ 22 }
{ 37 }
{ 3 7 }
{ 3 19 }
{ 7 19 }
{ 3 22 }
{ 7 22 }
{ 19 22 }
{ 3 37 }
{ 7 37 }
{ 19 37 }
{ 22 37 }
{ 3 7 19 }
{ 3 7 22 }
{ 3 19 22 }
{ 7 19 22 }
{ 3 7 37 }
{ 3 19 37 }
{ 7 19 37 }
{ 3 22 37 }
{ 7 22 37 }
{ 19 22 37 }
{ 3 7 22 37 }
{ 3 19 22 37 }
{ 7 19 22 37 }
{ 3 7 19 37 }
{ 3 7 19 22 }
{ 3 7 19 22 37 }