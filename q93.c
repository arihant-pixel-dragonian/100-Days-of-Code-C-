/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams
*/

#include<stdio.h>

int main()
{
    char string1[100],string2[100];
    int frequency[26]={0};
    int i,anagram=1;

    printf("Input the first string: ");
    fgets(string1,100,stdin);

    printf("Input the second string: ");
    fgets(string2,100,stdin);

    for(i=0;string1[i]!='\0' && string1[i]!='\n';i++)
    {
        frequency[string1[i]-'a']++;
    }

    for(i=0;string2[i]!='\0' && string2[i]!='\n';i++)
    {
        frequency[string2[i]-'a']--;
    }

    for(i=0;i<26;i++)
    {
        if(frequency[i]!=0)
        {
            anagram=0;
            break;
        }
    }

    if(anagram==1)
    {
        printf("Anagrams");
    }
    else
    {
        printf("Not anagrams");
    }

    return 0;
}
