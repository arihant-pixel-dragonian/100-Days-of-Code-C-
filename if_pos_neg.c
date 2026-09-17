/*Write a program to input and check whether an integer is even or odd using if-else*/
#include<stdio.h>
int main()
{
	int input;
	printf("Input an integer: ");
	scanf("%d", &input);
	if(input<0)
	printf("Input is negative");
	else if(input==0)
	printf("Input is 0");
	else if(input>0)
	printf("Input is positive");
	return 0;
}