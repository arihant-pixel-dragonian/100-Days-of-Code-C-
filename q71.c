/*
Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/

#include<stdio.h>

int main()
{
    int rows,columns,i,j;

    printf("Input the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    printf("Input the elements of the matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
