/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn
*/

#include<stdio.h>

int main()
{
    char string[100];
    int i=0,j=0;

    printf("Input a string: ");
    fgets(string,100,stdin);

    while(string[i]!='\0' && string[i]!='\n')
    {
        if(!(string[i]=='a' || string[i]=='e' || string[i]=='i' ||
             string[i]=='o' || string[i]=='u' || string[i]=='A' ||
             string[i]=='E' || string[i]=='I' || string[i]=='O' ||
             string[i]=='U'))
        {
            string[j]=string[i];
            j++;
        }

        i++;
    }

    string[j]='\0';

    printf("The string after removing vowels is: %s", string);

    return 0;
}
