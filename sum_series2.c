//Write the program to find the sum of the series 2/3+4/7+6/11+8/15...upto n terms
#include <stdio.h>
int main() 
{
    int n,count=0;
    float sum=0,i,j=2,k=3;
    printf("Input the number of terms: ");
    scanf("%d", &n);
    while(count<n)
        {
            i=j/k;
            sum+=i;
            count++;
            j=j+2;
            k=k+4;
        }
    printf("Sum of the series: %0.2f", sum);
    return 0;
}
