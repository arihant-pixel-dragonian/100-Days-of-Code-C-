/*
Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/

#include<stdio.h>

int main()
{
    char string[100];
    int i=0,vowels=0,consonants=0;

    printf("Input a string: ");
    fgets(string,100,stdin);

    while(string[i]!='\0' && string[i]!='\n')
    {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' ||
           string[i]=='o' || string[i]=='u' || string[i]=='A' ||
           string[i]=='E' || string[i]=='I' || string[i]=='O' ||
           string[i]=='U')
        {
            vowels++;
        }
        else if((string[i]>='a' && string[i]<='z') ||
                (string[i]>='A' && string[i]<='Z'))
        {
            consonants++;
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
