#include<stdio.h>
int main(){
    char chars[]={'a','B','z','1','E'};
    for(int i=0;i<5;i++){
        char c=chars[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                printf("%c is a vowel.\n",c);
            else
                printf("%c is a consonant.\n",c);
        }else{
            printf("%c is not a letter.\n",c);
        }
    }
    return 0;
}   