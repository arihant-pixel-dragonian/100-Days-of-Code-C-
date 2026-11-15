/*
Q60 (Arrays (1D))
📋
Count positive, negative, and zero elements in an array.
*/
#include<stdio.h>
int main()
{
	int n,i,negative=0,zero=0,positive=0;
	printf("Enter the number of elements: \n");
	scanf("%d", &n);
	int array[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d: ", i+1);
		scanf("%d", &array[i]);
	}
	for(i=0;i<n;i++)
	{
	if(array[i]<0)
	{negative++;}
	else if(array[i]==0)
	{zero++;}
	else if(array[i]>0)
	{positive++;}
	}
	printf("Count of negative numbers: %d\n", negative);
	printf("Count of zero: %d\n", zero);
	printf("Count of positive numbers: %d\n", positive);
	return 0;
}
