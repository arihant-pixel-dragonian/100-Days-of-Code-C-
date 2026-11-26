/*
Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world
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
        if(string[i]==' ')
        {
            string[i]='-';
        }

        i++;
    }

    if(string[i]=='\n')
    {
        string[i]='\0';
    }

    printf("The modified string is: %s", string);

    return 0;
}
