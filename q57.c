/*
Q57 (Arrays (1D))
📋
Find the sum of array elements.
*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Input the number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    for(i=0;i<n;i++)
        {
            printf("Input element %d: ", i);
            scanf("%d", &array[i]);
            sum+=array[i];
        }
            printf("%d", sum);
    return 0;
}
