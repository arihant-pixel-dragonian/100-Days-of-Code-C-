/*
Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include<stdio.h>
int main()
{
    int n,i,index;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Input the elements: ");
    for(i=0;i<n;i++)
        {scanf("%d", &array[i]);}
    printf("Input the index at which the element is to be deleted: ");
    scanf("%d", &index);
    for(i=index;i<n-1;i++)
        {
            array[i]=array[i+1];
        }
    printf("The updated array is: ");
    for(i=0;i<n-1;i++)
        {printf("%d ", array[i]);}
    return 0;
}
