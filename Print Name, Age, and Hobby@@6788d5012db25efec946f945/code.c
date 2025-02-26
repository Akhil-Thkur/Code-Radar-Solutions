#include<stdio.h>
int main() {
    char str[100];
    printf("Name: ");
    scanf("%s",&str);
    int x;
    printf("Age: ");
    scanf("%d",&x);
    char str_1[100];
    printf("Hobby: ");
    scanf("%s",&str_1);
    printf("Name:&s\nAge: &d\nHobby: &s",str,x,str_1);
    return 0;
}