#include<stdio.h>
void main()
{
    int age; 
    printf ("\n enter the age");
    scanf("%d",&age);
        if(age<12){
            printf(" it is child");}
        else if (age>12&&age<19){
            printf ("it is teenager");}
        else if(age>20&&age<59){
            printf("Divisible by 3 but not by 5");}
        else{
            printf("ye senior citizen hai");}
    
}