/*DATE:12/08/2026
Write the program to calculate area and circumferenceof a circle*/
#include<stdio.h>
#define pi 3.14
int main()
{
float r, Area, Circumference;
printf("input the radius of circle\n");
scanf("%f", &r);
Area=pi*r*r;
Circumference=2*pi*r;
printf("Area of circle:%0.2f\n", Area);
printf("Circumference of circle:%0.2f\n", Circumference);
return 0;
}