/*Q56 (Arrays (1D))
📋
Read and print elements of a one-dimensional array.
*/
#include<stdio.h>
int main()
{
    int n,i;
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
            printf("%d ", array[i]);
        }
    return 0;
}
