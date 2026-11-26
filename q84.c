#include<stdio.h>

int main()
{
    char string[100];
    int i=0;

    printf("Input a lowercase string: ");
    fgets(string,100,stdin);

    while(string[i]!='\0' && string[i]!='\n')
    {
        if(string[i]>='a' && string[i]<='z')
        {
            string[i]=string[i]-32;
        }

        i++;
    }

    if(string[i]=='\n')
    {
        string[i]='\0';
    }

    printf("The string in uppercase is: %s", string);

    return 0;
}
