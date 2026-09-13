#include<stdio.h>
int main(){
    int age=67;
    if(age>=18)
        printf("You are eligible to vote!\n");
    else{
        printf("Sorry, you need to wait %d more year(s) to vote.\n",18-age);
    }
    return 0;
}   