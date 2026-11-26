/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include<stdio.h>

int main()
{
    int rows,columns,i,j,d;

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

    printf("The diagonal traversal is: ");

    for(d=0;d<rows+columns-1;d++)
    {
        if(d%2==0)
        {
            for(i=rows-1;i>=0;i--)
            {
                j=d-i;

                if(j>=0 && j<columns)
                {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
        else
        {
            for(i=0;i<rows;i++)
            {
                j=d-i;

                if(j>=0 && j<columns)
                {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }

    return 0;
}
