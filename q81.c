/*
Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1
*/

#include<stdio.h>

int main()
{
    char string[100];
    int i=0,count=0;

    printf("Input a string: ");
    fgets(string,100,stdin);

    while(string[i]!='\0' && string[i]!='\n')
    {
        count++;
        i++;
    }

    printf("The number of characters is: %d", count);

    return 0;
}
