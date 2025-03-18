#include<stdio.h>
int main(){
    int n ,count=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0) {
        count++;
        }
    }if(count==3){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
    return 0;
}