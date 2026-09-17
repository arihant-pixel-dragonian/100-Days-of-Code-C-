/*Write a program to input and check whether an integer is positive, negative or zero using if-else*/
#include<stdio.h>
int main()
{
	int input;
	printf("Input an integer: ");
	scanf("%d", &input);
	if(input%2==0)
	printf("Input is even");
	else
	printf("Input is odd");
	return 0;
	
}