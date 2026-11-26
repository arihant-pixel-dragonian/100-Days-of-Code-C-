/*
Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/

#include<stdio.h>

int main()
{
    char string[100];
    int i=0,j,length=0,palindrome=1;

    printf("Input a string: ");
    fgets(string,100,stdin);

    while(string[i]!='\0' && string[i]!='\n')
    {
        length++;
        i++;
    }

    if(string[i]=='\n')
    {
        string[i]='\0';
    }

    for(i=0,j=length-1;i<j;i++,j--)
    {
        if(string[i]!=string[j])
        {
            palindrome=0;
            break;
        }
    }

    if(palindrome==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}
