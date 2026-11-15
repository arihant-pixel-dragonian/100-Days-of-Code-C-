//Write the program to find the sum of the series 1+3/4+5/6+7/8+...upto n terms
#include <stdio.h>
int main() 
{
    int n,count=1;
    float sum=1,i,j=3,k=4;
    printf("Input the number of terms: ");
    scanf("%d", &n);
    while(count<n)
        {
            i=j/k;
            sum+=i;
            count++;
            j=j+2;
            k=k+2;
        }
    printf("Sum of the series: %0.2f", sum);
    return 0;
}
