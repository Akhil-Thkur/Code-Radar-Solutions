#include<stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int res = x>>y;
    printf("%d",res);
    return 0;
}