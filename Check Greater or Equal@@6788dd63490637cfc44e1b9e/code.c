#include<stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>=y) {
        printf("Yes");
    }
    else if (x<y) {
        printf("No");
    }
}