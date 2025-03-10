#include<stdio.h>
int main () {
    int x,y,c;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&c);
    if (x+y==c) {
        printf("%d",c);
    }
    else if (x%y==c) {
        printf("%d",c);
    }
    else if (x-y==c) {
        printf("%d",c);
    }
    else if (x*y==c) {
        printf("%d",c);
    }
}