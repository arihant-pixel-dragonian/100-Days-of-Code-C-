/*Write a program to convert temperature from celsius to farenheit*/
#include<stdio.h>
int main()
{
	float  c,f;
	printf("Input the temperature in celsius: ");
	scanf("%f", &c);
	f=(9.0/5.0)*c+32;
	printf("The temperture in Farenheit is: %0.1f",f);
	return 0;
}