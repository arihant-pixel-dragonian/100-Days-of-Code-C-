/*
Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
*/

#include<stdio.h>

int main()
{
    int rows,columns,i,j,sum=0;

    printf("Input the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int matrix[rows][columns];

    printf("Input the elements of the matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d", &matrix[i][j]);
            sum=sum+matrix[i][j];
        }
    }

    printf("The sum of all elements is: %d", sum);

    return 0;
}
