#include<stdio.h>
int main(){
    int num,first,last;
    int tests[]={888,565,978};
    for(int i=0;i<3;i++){
        num=tests[i];
        first=num/100;
        last=num%10;
        if(first==last)
            printf("%d is a palindrome.\n",num);
        else
            printf("%d is NOT a palindrome.\n",num);
    }
    return 0;
}   