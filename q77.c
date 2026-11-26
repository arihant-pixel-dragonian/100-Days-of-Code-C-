/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/

#include<stdio.h>

int main()
{
    int rows,columns,i,j,distinct=1;

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
        printf("The matrix is not a square matrix.");
    }
    else
    {
        for(i=0;i<rows;i++)
        {
            for(j=i+1;j<rows;j++)
            {
                if(matrix[i][i]==matrix[j][j])
                {
                    distinct=0;
                    break;
                }
            }

            if(distinct==0)
            {
                break;
            }
        }

        if(distinct==1)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }

    return 0;
}
