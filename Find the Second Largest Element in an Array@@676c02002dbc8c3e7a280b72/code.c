#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int a[size],max,sMax;
    for(int i= 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    max =a[0];
    sMax = a[0];
    for(int i =0;i<size;i++){
        if(a[i]>max){
            sMax =max;
            max=a[i];
        }
        if(a[i]>max && a[i]<sMax){
            sMax=a[i];
        }

    }

}