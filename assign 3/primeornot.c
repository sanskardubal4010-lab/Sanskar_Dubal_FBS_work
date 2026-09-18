#include<stdio.h>
void main ()
{
    int i=2,s=7,flag=0;
 while(i<=s){
    if(s%i==0)
    flag=1;    
     i++;
 }
 if (flag==0)
 printf("number is not prime");
 else
 printf("number is  prime");
}
