/*Sum,difference,product and quotient of two numbers */
 #include<stdio.h>
 int main()
{
float a,b,Sum,Difference,Product,Quotient;
printf("Input two numbers in variables a and b\n");
scanf("%f %f", &a,&b);
Sum=a+b;
Difference=a-b;
Product=a*b;
Quotient=a/b;
printf("Sum of a and b:%0.2f\n", Sum);
printf("Difference of a and b:%0.2f\n", Difference);
printf("Product of a and b:%0.2f\n", Product);
printf("Quotient of a and b:%0.2f\n", Quotient);
return 0;
 }