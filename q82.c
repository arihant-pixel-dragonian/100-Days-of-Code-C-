/*
Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i
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
        printf("%c\n", string[i]);
        i++;
    }

    return 0;
}
