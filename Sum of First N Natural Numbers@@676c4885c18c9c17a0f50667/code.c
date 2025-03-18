#include<stdio.h>
int main () {
    int x;
    scanf("%d",&x);
    int sum = 0;
    for (int i=1;i<=x;i++) {
        printf("%d",i);
        sum = sum + 1;
    }
    printf("%d",sum);
}