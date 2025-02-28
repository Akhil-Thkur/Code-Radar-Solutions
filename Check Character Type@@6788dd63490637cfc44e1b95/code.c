#include<stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if((a>=97 && a<=122) ||(a>=65 && a<=90)){
        if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='O'||a=='o'||a=='u'||a=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(a>=48 && a<=57){
        printf("Digit");
    }
    else{
        printf("Speacial Character");
    }

}