#include<strdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i = 1;i<=x;i++){
        for(int j =1 ;j<=x;j++){
            printf(" ");
        }
        for(int k = 1;k<=x+1-i;k++){
            printf("*");
        }
        printf("\n");
    }
}