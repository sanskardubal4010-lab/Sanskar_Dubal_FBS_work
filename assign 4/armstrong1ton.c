#include<stdio.h>
void main()
{
    int num=153,n,rem,fact=1,sum=0;
    int temp=num;
    for(int num=1;num<=n;num++)
    while(temp>0)
    {   rem=temp%10;
        fact=1;
        for(int i=1;i<=3;i++)
        { fact=fact*rem;
        }
        temp=temp/10;
        sum=fact+sum;
    }
    if(num==sum)
     printf("no is armstrong");
    else
     printf("no is not armstrong");
}