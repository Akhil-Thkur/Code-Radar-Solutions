#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i=2;i>=1;i--){
        for(int j =1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}