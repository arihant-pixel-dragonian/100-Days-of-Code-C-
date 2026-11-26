/*
Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1
*/

#include<stdio.h>

int main()
{
    char string[100];
    int i=0,spaces=0,digits=0,special=0;

    printf("Input a string: ");
    fgets(string,100,stdin);

    while(string[i]!='\0' && string[i]!='\n')
    {
        if(string[i]==' ')
        {
            spaces++;
        }
        else if(string[i]>='0' && string[i]<='9')
        {
            digits++;
        }
        else if(!((string[i]>='a' && string[i]<='z') ||
                  (string[i]>='A' && string[i]<='Z')))
        {
            special++;
        }

        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces,digits,special);

    return 0;
}
