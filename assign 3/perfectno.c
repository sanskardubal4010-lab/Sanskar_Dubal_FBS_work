#include<stdio.h>
void main ()
{
int num=28,sum=0;
for(int i=1;i<num;i++)
{if(num%i==0)
{sum=sum+i;
 }
}
if(num==sum)
printf("no is perfect");
else
printf("no is not perfect");
}