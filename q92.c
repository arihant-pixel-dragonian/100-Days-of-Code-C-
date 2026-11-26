/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s
*/

#include<stdio.h>

int main()
{
    char string[100];
    int i,j,found=0;

    printf("Input a lowercase string: ");
    fgets(string,100,stdin);

    for(i=0;string[i]!='\0' && string[i]!='\n';i++)
    {
        for(j=i+1;string[j]!='\0' && string[j]!='\n';j++)
        {
            if(string[i]==string[j])
            {
                printf("The first repeating alphabet is: %c", string[i]);
                found=1;
                break;
            }
        }

        if(found==1)
        {
            break;
        }
    }

    if(found==0)
    {
        printf("No repeating alphabet found.");
    }

    return 0;
}
