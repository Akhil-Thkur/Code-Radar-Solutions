#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i =1;i<=x;i++){
        for(int j=1;j<=2*i-j;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}