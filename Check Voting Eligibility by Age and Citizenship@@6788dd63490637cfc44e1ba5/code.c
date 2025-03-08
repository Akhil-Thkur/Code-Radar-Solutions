#include<stdio.h>
int main () {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>=18 || x==1) {
        printf("Eligible");
    }
    else if (x<18 || x==0) {
        printf("Not Eligible");
    }

}