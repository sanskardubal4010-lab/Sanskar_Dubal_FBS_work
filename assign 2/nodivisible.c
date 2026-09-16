#include<stdio.h>
void main()
{
    int a; 
    printf ("\n enter the number");
    scanf("%d",&a);
        if(a%3==0&&a%5==0){
            printf("Divisible by 3 and 5");}
        else if (a%5==0){
            printf ("Divisible by 5 but not by 3");}
        else if(a%3==0){
            printf("Divisible by 3 but not by 5");}
        else{
            printf("Divisible by none");}
    
}