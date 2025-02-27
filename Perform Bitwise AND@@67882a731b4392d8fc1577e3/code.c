#include<stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int result = x & y;
    printf("%d",result);
    return 0;
}