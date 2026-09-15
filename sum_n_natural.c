/*Write the program to find the sum of first n natural numbers*/
#include<stdio.h>
int main()
{
	int  n,sum;
	printf("Input the number upto which you want to find the sum of natural numbers:");
	scanf("%d", &n);
	sum=(n*(n+1))/2;
	printf("Sum of natural numbers upto %d is: %d", n,sum);
	return 0;
}