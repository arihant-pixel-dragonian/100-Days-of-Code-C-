/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>
int main()
{
    int n,i,j,temp,insert;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int array[n+1],index=n;
    printf("Input the elements: ");
    for(i=0;i<n;i++)
        {scanf("%d", &array[i]);}
    for(i=0;i<n;i++)
        {for(j=i+1;j<n;j++)
            {
                if(array[j]<array[i])
                {
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
    printf("Input the element to insert: ");
    scanf("%d", &insert);
    for(i=0;i<n;i++)
        {
            if(insert<array[i])
            {index=i;
            break;}
        }
    for(i=n-1;i>=index;i--)
        {
            array[i+1]=array[i];
        }
    array[index]=insert;
    printf("The updated sorted array is: ");
    for(i=0;i<=n;i++)
        {printf("%d ", array[i]);}
    return 0;
}
