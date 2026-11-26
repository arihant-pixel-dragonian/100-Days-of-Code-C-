/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/

#include<stdio.h>

int main()
{
    char string[100],temp;
    int i=0,j,length=0;

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
        temp=string[i];
        string[i]=string[j];
        string[j]=temp;
    }

    printf("The reversed string is: %s", string);

    return 0;
}
