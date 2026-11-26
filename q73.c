/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/

#include<stdio.h>

int main()
{
    int rows,columns,i,j,sum;

    printf("Input the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    int rowSum[rows];

    printf("Input the elements of the matrix:\n");
    for(i=0;i<rows;i++)
    {
        sum=0;

        for(j=0;j<columns;j++)
        {
            scanf("%d", &matrix[i][j]);
            sum=sum+matrix[i][j];
        }

        rowSum[i]=sum;
    }

    printf("The sum of each row is: ");
    for(i=0;i<rows;i++)
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
