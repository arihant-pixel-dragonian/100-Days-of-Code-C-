/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/

#include<stdio.h>

int main()
{
    char string1[100],string2[100],temp;
    int i,j,length1=0,length2=0,same,rotation=0;

    printf("Input the first string: ");
    fgets(string1,100,stdin);

    printf("Input the second string: ");
    fgets(string2,100,stdin);

    while(string1[length1]!='\0' && string1[length1]!='\n')
    {
        length1++;
    }

    while(string2[length2]!='\0' && string2[length2]!='\n')
    {
        length2++;
    }

    if(length1==length2)
    {
        for(i=0;i<length1;i++)
        {
            temp=string1[length1-1];

            for(j=length1-1;j>0;j--)
            {
                string1[j]=string1[j-1];
            }

            string1[0]=temp;

            same=1;

            for(j=0;j<length1;j++)
            {
                if(string1[j]!=string2[j])
                {
                    same=0;
                    break;
                }
            }

            if(same==1)
            {
                rotation=1;
                break;
            }
        }
    }

    if(rotation==1)
    {
        printf("Rotation");
    }
    else
    {
        printf("Not rotation");
    }

    return 0;
}
