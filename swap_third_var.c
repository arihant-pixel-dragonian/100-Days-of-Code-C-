/*Write a program to swap two numbers using a third variable*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Input two integers for a and b\n");
	scanf("%d %d", &a,&b);
	c=a;
	a=b;
	b=c;
	printf("a and b are %d and %d respectively", a,b);
	return 0;
}