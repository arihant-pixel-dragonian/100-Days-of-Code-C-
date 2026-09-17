/*Write a program to input time in seconds and convert it to hours:minutes:seconds format*/
#include<stdio.h>
int main()
{
		int input,h,m,s;
		printf("Input time in seconds: ");
		scanf("%d", &input);
		h=input/3600;
		input=input%3600;
		m=input/60;
		input=input%60;
		s=input;
		printf("%d hours:%d minutes :%d seconds", h,m,s);
		return 0;
}