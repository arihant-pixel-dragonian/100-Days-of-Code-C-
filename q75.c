/*
Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4

2 2
5 6
7 8
Output 1:
6 8
10 12
*/

#include<stdio.h>

int main()
{
    int rows1,columns1,rows2,columns2,i,j;

    printf("Input the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &columns1);

    int matrix1[rows1][columns1];

    printf("Input the elements of the first matrix:\n");
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<columns1;j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Input the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &columns2);

    int matrix2[rows2][columns2];

    printf("Input the elements of the second matrix:\n");
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<columns2;j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if(rows1==rows2 && columns1==columns2)
    {
        int sum[rows1][columns1];

        for(i=0;i<rows1;i++)
        {
            for(j=0;j<columns1;j++)
            {
                sum[i][j]=matrix1[i][j]+matrix2[i][j];
            }
        }

        printf("The sum of the matrices is:\n");
        for(i=0;i<rows1;i++)
        {
            for(j=0;j<columns1;j++)
            {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The matrices cannot be added.");
    }

    return 0;
}
