/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/

#include<stdio.h>

int main()
{
    char string[200];
    int i=0,start=0,maxStart=0;
    int currentLength=0,maxLength=0;

    printf("Input a sentence: ");
    fgets(string,200,stdin);

    while(1)
    {
        if(string[i]!=' ' && string[i]!='\n' && string[i]!='\0')
        {
            if(currentLength==0)
            {
                start=i;
            }

            currentLength++;
        }
        else
        {
            if(currentLength>maxLength)
            {
                maxLength=currentLength;
                maxStart=start;
            }

            currentLength=0;

            if(string[i]=='\n' || string[i]=='\0')
            {
                break;
            }
        }

        i++;
    }

    printf("The longest word is: ");
    for(i=maxStart;i<maxStart+maxLength;i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}
