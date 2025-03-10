#include<stdio.h>
int main () {
    int x,y;
    char c;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%c",&c);
    if (c=='+') {
        printf("%d", x+y);
    }
    else if (c=='-') {
        printf("%d", x-y);
    }
    else if (c=='*') {
        printf("%d", x*y);
    }
    else if (c=='/') {
        printf("%d", x/y);
    }
    else {
        printf"IOnvalid error"
    }
}