/*
Q61 (Arrays (1D))
📋
Search for an element in an array using linear search.
*/
#include<stdio.h>
int main()
{
	int n,i,element,c=0;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int array[n];
    printf("Input the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &array[i]);
	}
	printf("Input the element to search: ");
    scanf("%d", &element);
    for(i=0;i<n;i++)
        {
            if(array[i]==element)
                {
                    printf("The element %d is present at position: %d or index: %d", element,i+1,i);
                 c++;
                }
        }
    if(c==0)
        printf("No such element was found");
	return 0;
}
