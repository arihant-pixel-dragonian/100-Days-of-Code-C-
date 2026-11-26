/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/

#include<stdio.h>

int main()
{
    int rows,columns,i,j,symmetric=1;

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

    if(rows!=columns)
    {
        symmetric=0;
    }
    else
    {
        for(i=0;i<rows;i++)
        {
            for(j=0;j<columns;j++)
            {
                if(matrix[i][j]!=matrix[j][i])
                {
                    symmetric=0;
                    break;
                }
            }

            if(symmetric==0)
            {
                break;
            }
        }
    }

    if(symmetric==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
