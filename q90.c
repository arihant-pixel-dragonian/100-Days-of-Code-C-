/*
Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO
*/

#include<stdio.h>

int main()
{
    char string[100];
    int i=0;

    printf("Input a string: ");
    fgets(string,100,stdin);

    while(string[i]!='\0' && string[i]!='\n')
    {
        if(string[i]>='a' && string[i]<='z')
        {
            string[i]=string[i]-32;
        }
        else if(string[i]>='A' && string[i]<='Z')
        {
            string[i]=string[i]+32;
        }

        i++;
    }

    if(string[i]=='\n')
    {
        string[i]='\0';
    }

    printf("The string after toggling case is: %s", string);

    return 0;
}
