/*DATE: 12/08/2026
Write the program to calculate simple and compound interest*/
#include<stdio.h>
#include<math.h>
int main()
{
float principal, rate, time, s_interest,c_interest,a;
int n;
printf("input principal amount, rate of interest(in percentage) and tenure(in years) respectively\n");
scanf("%f %f %f", &principal, &rate, &time);
printf("How many times does the interest compound each year: ");
scanf("%d", &n);
s_interest=(principal*rate*time)/100;
a=principal*pow(1+rate/(100*n), (n*time));
c_interest=a-principal;
printf("Simple interest:%0.2f\n", s_interest);
printf("Compound interest:%0.2f\n", c_interest);
return 0;
}