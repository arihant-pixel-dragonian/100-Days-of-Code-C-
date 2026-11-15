//Write the program to check wheher a number is a strong number
#include <stdio.h>
int main() 
{
    int n,rem,res=0,i,facsum=1,temp;
    printf("Input a number: ");
    scanf("%d", &n);
    temp=n;
    while(temp>0)
        {
            facsum=1;
            rem=temp%10;
            for(i=rem;i>0;i--)
                {facsum=facsum*i;}
            res=res+facsum;
            temp=temp/10;
        }
    if(res==n && res>0)
        printf("The number %d is a strong number", n);
    else
        printf("The number %d is not a strong number", n);
    return 0;
}
