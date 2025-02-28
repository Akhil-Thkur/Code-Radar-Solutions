#include<stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a-b>=a) {
        printf("Loss");
    }
    else{
        printf("Profit");
    }
    return 0;
}