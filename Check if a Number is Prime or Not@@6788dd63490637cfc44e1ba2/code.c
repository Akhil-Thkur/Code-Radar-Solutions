#include<stdio.h>
int main(){
    int n ,count=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0) {
        count++;
        }
    }if(count==2){
        printf("NotPrime");
    }else{
        printf("Prime");
    }
    return 0;
}