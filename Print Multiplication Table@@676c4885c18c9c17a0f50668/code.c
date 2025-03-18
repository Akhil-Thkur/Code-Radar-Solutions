#include<stdio.h>
int main () {
    int x;
    scanf("%d",&x);
    for (int i=1;i<=10;i=i+2) {
        printf("x * i = (x*i)%d",i);
    }
}