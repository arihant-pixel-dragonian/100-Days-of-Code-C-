/*Write a program to calculate the area and perimeter of a rectangle*/
#include<stdio.h>
int main()
{
double l,b,area,perimeter;
printf("Input length and breadth of the rectangle respectively\n");
scanf("%lf %lf", &l,&b);
area=l*b;
perimeter=2*(l+b);
printf("Area of rectangle:%0.2f\n", area);
printf("Perimeter of rectangle:%0.2f\n", perimeter);
return 0;
}