#include <stdio.h>
void main()
{
    int a,b;
    int sum,sub,mul,div,mod;
    printf ("enteer the values of a=");
     scanf("%d",&a);
    printf ("enter printfthe values of b=");
     scanf("%d",&b); 
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    printf("sum of a and b are=%d \n", sum );
    printf("subtraction of a and b are=%d\n ",sub );
    printf("multiplication of a and b are=%d \n",mul );
    printf("quotient of a and b are=%d \n",div );
    printf("reminder of a and b are=%d \n",mod );

}