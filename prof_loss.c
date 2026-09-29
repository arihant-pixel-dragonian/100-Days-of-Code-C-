/* Write a program to find profit or loss percentage
   given cost price and selling price */

#include<stdio.h>

int main()
{
    float cp, sp, profit, loss, percentage;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if(sp > cp)
    {
        profit = sp - cp;
        percentage = (profit / cp) * 100;

        printf("Profit = %.2f\n", profit);
        printf("Profit percentage = %.2f%%", percentage);
    }
    else if(cp > sp)
    {
        loss = cp - sp;
        percentage = (loss / cp) * 100;

        printf("Loss = %.2f\n", loss);
        printf("Loss percentage = %.2f%%", percentage);
    }
    else
    {
        printf("No profit, no loss");
    }

    return 0;
}
