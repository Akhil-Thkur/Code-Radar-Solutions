#include<stdio.h>
int main () {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>=y || x<=y  ){
        if( x>0 &&y>0)
            printf("True");
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;

}