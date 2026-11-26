/*
Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/

#include<stdio.h>

int main()
{
    int rows,columns,i,j;

    printf("Input the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];
    int transpose[columns][rows];

    printf("Input the elements of the matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d", &matrix[i][j]);
            transpose[j][i]=matrix[i][j];
        }
    }

    printf("The transpose of the matrix is:\n");
    for(i=0;i<columns;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
