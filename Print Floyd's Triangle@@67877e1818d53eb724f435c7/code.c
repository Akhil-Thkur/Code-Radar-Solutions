#include<stdio.h>
int main () {
    int x;
    scanf("%d",&x);
    int a = 1;
    for(int i = 1;i<=x;i++){
        for(int j = 1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}