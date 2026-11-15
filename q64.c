/*
Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/
#include<stdio.h>
int main()
{
    int n,i,digit,temp,freq=0;
    printf("Input the number: ");
    scanf("%d", &n);
    int count[10]={0};
    while(n>0)
        {
            digit=n%10;
            count[digit]++;
            n=n/10;
        }
    temp=count[0];
    for(i=0;i<10;i++)
        {
            if(temp<count[i])
            {
             temp=count[i];
                freq=i;
            }
        }
     printf("The most frequent digit is %d", freq);
    return 0;
}
