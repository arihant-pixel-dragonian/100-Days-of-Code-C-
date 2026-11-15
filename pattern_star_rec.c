//Write the program to make a rectangular star pattern
#include <stdio.h>
int main() 
{
    int n,i,j;
    printf("Input the number of rows: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {printf("*");}
        printf("\n");
        }
    return 0;
}
