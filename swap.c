/*Write a program to swap two numbers without using a third variable*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Input two integers for a and b\n");
	scanf("%d %d", &a,&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("a and b are %d and %d respectively", a,b);
	return 0;
}