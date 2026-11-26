/*
Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/

#include<stdio.h>

int main()
{
    int n,i,j,k,temp;

    printf("Input the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Input the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input the number of positions to rotate: ");
    scanf("%d", &k);

    k=k%n;

    for(i=0;i<k;i++)
    {
        temp=array[n-1];

        for(j=n-1;j>0;j--)
        {
            array[j]=array[j-1];
        }

        array[0]=temp;
    }

    printf("Array after rotation: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
