/*
Q62 (Arrays (1D))
📋
Reverse an array without taking extra space.
*/
#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Input the number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
     printf("Input the elements: ");
    for(i=0;i<n;i++)
        {
            scanf("%d", &array[i]);
        }
    for(i=0;i<n/2;i++)
        {
            temp=array[i];
            array[i]=array[n-i-1];
            array[n-i-1]=temp;
        }
    printf("The reversed array is: ");
    for(i=0;i<n;i++)
        {printf("%d ", array[i]);}
    return 0;
}
