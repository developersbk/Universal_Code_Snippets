#include<stdio.h>
main()
{
    int a[10][10],b[10][10],i,j,k=0,m,n;
    printf("\nEnter the row and column of matrix");
    scanf("%d %d",&m,&n);
    printf("\nEnter the First matrix: ");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("\nThe matrix is\n");
    for(i=0; i<m; i++)
        {
            printf("\n");
            for(j=0; j<m; j++)
                {
                    printf("%d\t",a[i][j]);
                }
        }
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            b[i][j]=0;
    for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
                {
                    b[i][j]=a[j][i];
                    printf("\n%d",b[i][j]);
                }
        }
    printf("\nTraspose of a matrix is : \n“);
           for(i=0; i<m; i++)
    {
        printf("\n");
            for(j=0; j<m; j++)
                {
                    printf("%d\t",b[i][j]);
                }
        }
}