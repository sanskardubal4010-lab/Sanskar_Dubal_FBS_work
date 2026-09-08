#include<stdio.h>
int main(){
    int years[]={2000,1900,2024,2023};
    for(int i=0;i<4;i++){
        int y=years[i];
        if((y%400==0)||(y%4==0&&y%100!=0))
            printf("%d is a leap year.\n",y);
        else
            printf("%d is NOT a leap year.\n",y);
    }
    return 0;
}   