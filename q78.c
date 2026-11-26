/*
Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
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

            if(i==j)
            {
                sum=sum+matrix[i][j];
            }
        }
    }

    if(rows!=columns)
    {
        printf("The matrix is not a square matrix.");
    }
    else
    {
        printf("The sum of main diagonal elements is: %d", sum);
    }

    return 0;
}
