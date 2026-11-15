/*
Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
    int n1,n2,n3,i;
    printf("Input the number of elements in array1: ");
    scanf("%d", &n1);
    int array1[n1];
     printf("Input the elements: ");
    for(i=0;i<n1;i++)
        {
            scanf("%d", &array1[i]);
        }
    
    printf("Input the number of elements in array2: ");
    scanf("%d", &n2);
    int array2[n2];
     printf("Input the elements: ");
    for(i=0;i<n2;i++)
        {
            scanf("%d", &array2[i]);
        }
    n3=n1+n2;
   int array3[n3];
    for(i=0;i<n1;i++)
        {array3[i]=array1[i];}
    for(i=0;i<n2;i++)
        {array3[n1+i]=array2[i];}
    for(i=0;i<n3;i++)
        {
            printf("%d ", array3[i]);
        }
    return 0;
}
