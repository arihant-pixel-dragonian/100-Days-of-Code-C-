/*
Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main()
{
    int n,i,found=0,largest,largest2nd;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Input the elements: ");
    for(i=0;i<n;i++)
        {scanf("%d", &array[i]);}
    largest=array[0];
    largest2nd=array[0];
    for(i=0;i<n;i++)
        {
            if(largest<array[i])
            {
                largest2nd=largest;
                largest=array[i];
                found=1;
            }
            else if(largest>array[i])
            {
                if(largest2nd<array[i] || found==0)
                {
                    largest2nd=array[i];
                    found=1;
                }
            }
        }
    if(found==0)
    {printf("No second largest element exists");}
    else
    {printf("The second largest element is: %d", largest2nd);}
    return 0;
}
