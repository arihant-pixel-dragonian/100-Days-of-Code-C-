/*
Q59 (Arrays (1D))
📋
Count even and odd numbers in an array.
*/
#include<stdio.h>
int main()
{
    int n,i,j=0,k=0,c;
    printf("Input the number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    for(i=0;i<n;i++)
        {
            printf("Input element %d: ", i);
            scanf("%d", &array[i]);
        }
    for(i=0;i<n;i++)
        {
            if(array[i]%2==0)
            {j++;}
            else
            {k++;}
        }
            printf("The number of even elements is: %d\n", j);
            printf("The number of odd elements is: %d\n", k);
    return 0;
}
