#include<stdio.h>
int getmax(int []);
int size;
int main()
{
    int arr[100],max,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter %d elements of array: ", size);
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    max=getmax(arr);
    printf("Largest element of array is: %d",max);
    return 0;
}
int getmax(int arr[])
{
    static int i=0,max =0;
    if(i < size)
        {
            if(max<arr[i])
                max=arr[i];
            i++;
            getmax(arr);
        }
    return max;
}