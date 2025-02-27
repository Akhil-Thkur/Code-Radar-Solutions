#include<stdio.h>
int main () {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>y && x>0 && y>0) {
        printf("True");
    }
    else (x>0 && y>0){
        printf("False");
    }
    return 0;

}