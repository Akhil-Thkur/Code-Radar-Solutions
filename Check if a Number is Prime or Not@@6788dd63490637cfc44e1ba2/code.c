#include<stdio.h>
int main () {
    int x, count = 0;
    scanf("%d",&x);
    for (int i=1;i<=x;i++) {
        if (n%i==0) {
            count++;
        }
    }
    if (count ==2) {
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
}