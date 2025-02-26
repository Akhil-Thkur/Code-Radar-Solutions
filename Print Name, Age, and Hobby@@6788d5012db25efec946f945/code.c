#include<stdio.h>
int main() {
    char str[100];
    scanf("%s",&str);
    printf("Name: ");
    int x;
    scanf("%d",&x);
    printf("Age: ");
    char str_1[100];
    scanf("%s",&str_1);
    printf("Hobby: ");
    printf("Name:&s\nAge: &d\nHobby: &s",str,x,str_1);
    return 0;
}