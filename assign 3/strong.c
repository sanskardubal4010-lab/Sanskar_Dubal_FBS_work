#include<stdio.h>
void main ()
{
    int num=123,rem,fact=1,sum=0;
    int temp=num;
    while(temp>0){
        rem=temp%10;
        fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        temp=temp/10;
        sum=fact+sum;
    }
    if (num==sum)
    printf("no is armstrong");
    else
    printf("no is not armstrong ");
}