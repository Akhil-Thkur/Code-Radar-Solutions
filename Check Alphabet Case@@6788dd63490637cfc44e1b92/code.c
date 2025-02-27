#include<stdio.h>
int main () {
    char str[100];
    scanf("%s",&str);
    if (str>A && str<Z) {
        printf("uppercase");
    }
    else {
        printf("Lowercase");
    }
    return 0;
}