/*
Q58 (Arrays (1D))
📋
Find the maximum and minimum element in an array.
*/
#include<stdio.h>
int main()
{
    int n,i,j,k,c;
    printf("Input the number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    for(i=0;i<n;i++)
        {
            printf("Input element %d: ", i);
            scanf("%d", &array[i]);
        }
    c=array[0];
    for(j=0;j<n;j++)
        {
            if(c<array[j])
                c=array[j];
        }
            printf("The maximum element is: %d\n", c);
    c=array[0];
    for(j=0;j<n;j++)
        {
            if(c>array[j])
                c=array[j];
        }
            printf("The minimum element is: %d\n", c);
    return 0;
}
