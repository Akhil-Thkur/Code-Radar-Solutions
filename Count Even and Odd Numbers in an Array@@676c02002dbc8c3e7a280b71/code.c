#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<=x-1;i++){
        scanf("%d",&arr[i]);
    }
    int sumEven = 0;
    int sumOdd = 0;
    for(int i =0 ;i<=x-1;i++){
        if(arr[i]%2==0){
            sumEven++;
        }
        else {
            sumOdd++;
        }
        printf("%d%d",sumEven,sumOdd);
    }
}