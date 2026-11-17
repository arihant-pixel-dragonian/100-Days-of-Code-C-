/*
Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
int main()
{
    int n,i,insert,index;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int array[n+1];
    printf("Input the elements: ");
    for(i=0;i<n;i++)
        {scanf("%d", &array[i]);}
    printf("Input the index at which the element is to be inserted: ");
    scanf("%d", &index);
    printf("Input the element to insert: ");
    scanf("%d", &insert);
    for(i=n-1;i>=index;i--)
        {
            array[i+1]=array[i];
        }
    array[index]=insert;
    printf("The updated array is: ");
    for(i=0;i<=n;i++)
        {printf("%d ", array[i]);}
    return 0;
}
