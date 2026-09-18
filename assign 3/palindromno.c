#include<stdio.h>
void main ()
{
int num=121,rem,rev=0;
int temp=num;
while(temp>0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
if(num==rev)
printf("no is palindrome");
else
printf("no is not palindrome");
}