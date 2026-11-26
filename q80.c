/*
Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154
*/

#include<stdio.h>

int main()
{
    int rows1,columns1,rows2,columns2,i,j,k;

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

    if(columns1!=rows2)
    {
        printf("The matrices cannot be multiplied.");
    }
    else
    {
        int product[rows1][columns2];

        for(i=0;i<rows1;i++)
        {
            for(j=0;j<columns2;j++)
            {
                product[i][j]=0;

                for(k=0;k<columns1;k++)
                {
                    product[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }

        printf("The product of the matrices is:\n");
        for(i=0;i<rows1;i++)
        {
            for(j=0;j<columns2;j++)
            {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
