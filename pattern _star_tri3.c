/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
    */
#include <stdio.h>
int main() 
{
    int n,i,j,k;
    printf("Input the number of rows(odd number): ");
    scanf("%d", &n);
    if(n%2!=0)
    {
    for(i=1;i<=n/2+1;i++)
       {
            for(j=1;j<2*i;j++)
                {
                    printf("*");
                }
        printf("\n");
       }
     for(i=n/2;i>=1;i--)
       {
            for(j=1;j<2*i;j++)
                {
                    printf("*");
                }
         printf("\n");
       }
    }
    return 0;
}
