/*Write a program to print all the prime numbers from 1 to n.
    */
#include<stdio.h>
#include<math.h>
int main()
{
    int n,c,i,j=0,k,limit,rem;
    printf("Input the highest number allowed for prime numbers: ");
    scanf("%d", &limit);
    int array[limit];
        for(n=2;n<=limit;n++)
            {
                c=0;
                for(i=2;i<=sqrt(n);i++)
                    {
                        rem=n%i;
                        if(rem==0)
                        {
                         c++;
                        break;
                        }
                    }
                if(c==0) //c==0 means number is prime
                {
                    array[j]=n;
                    j++;
                }
            }
    for(k=0;k<j;k++)
        if(array[k])
        {printf("%d ", array[k]);}
    return 0;
}
