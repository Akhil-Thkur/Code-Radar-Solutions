#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    for(int i = 2;i<=x;i--){
        int a =1;
        for(int j = 1;j<=i;j++){
            int d= a+64;
            char ch = (char)d;
            priuntf("%c ",ch);
            a++;
        }
        printf("\n");
    }
}