/*
Q65: Search in a sorted array using binary search.
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int n,i,j,temp,search,low,mid,high,first=-1,last=-1;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int array[n];
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
    printf("Input the element to search: ");
    scanf("%d", &search);
    low=0;
    high=n-1;
    while(low<=high)
        {
            mid=(low+high)/2;
            if(search==array[mid])
                {first=mid;
                 high=mid-1;}
            else if(search<array[mid])
                {high=mid-1;}
            else
                {low=mid+1;}
        }
    
     low=0;
    high=n-1;
    while(low<=high)
        {
            mid=(low+high)/2;
            if(search==array[mid])
                {last=mid;
                low=mid+1;}
            else if(search<array[mid])
                {high=mid-1;}
            else
                {low=mid+1;}
        }
    if(first==-1)
    {printf("The element is not present in the array");}
    else
    {
        printf("In a sorted array the element is present at indices: ");
        for(i=first;i<=last;i++)
            {printf("%d ", i);}
    }
    return 0;
}
