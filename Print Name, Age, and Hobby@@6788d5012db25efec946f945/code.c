#include<stdio.h>
int main() {
    char str[100];
    scanf("%s",&str);
    int x;
    scanf("%d",&x);
    char str_1[100];
    scanf("%s",&str_1);
    
    printf("Name: %s\nAge: %d\nHobby: %s",str,x,str_1);
    return 0;
}