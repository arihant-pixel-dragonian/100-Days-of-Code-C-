/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/

#include<stdio.h>

int main()
{
    char string[100],character;
    int i=0,count=0;

    printf("Input a string: ");
    fgets(string,100,stdin);

    printf("Input the character whose frequency is to be found: ");
    scanf(" %c", &character);

    while(string[i]!='\0' && string[i]!='\n')
    {
        if(string[i]==character)
        {
            count++;
        }

        i++;
    }

    printf("The frequency of %c is: %d", character,count);

    return 0;
}
