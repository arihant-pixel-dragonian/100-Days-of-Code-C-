/* Write a program to implement a basic calculator
   using switch-case for +, -, *, /, % */

#include<stdio.h>

int main()
{
    int a, b;
    char operator;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    switch(operator)
    {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Result = %.2f", (float)a / b);
            else
                printf("Division by zero is not possible");
            break;

        case '%':
            if(b != 0)
                printf("Result = %d", a % b);
            else
                printf("Modulo by zero is not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
