#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    switch(n){
        case 10: printf("Hexadecimal: A"); break;
        case 11: printf("Hexadecimal: B"); break;
        case 12: printf("Hexadecimal: C"); break;
        case 13: printf("Hexadecimal: D"); break;
        case 14: printf("Hexadecimal: E"); break;
        case 15: printf("Hexadecimal: F"); break;
    }
    printf("\n");
    
    int o = n+2 ;
    printf("Octal: %d",o);

}