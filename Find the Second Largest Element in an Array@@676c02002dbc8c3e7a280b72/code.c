#include<stdio.h>
#include <limits.h>
int main() {
    int size;
    scanf("%d",&size);
    int a[size],max,sMax;
    for(int i= 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    max =INT_MIN;
    sMax = INT_MIN;
    for(int i =0;i<size;i++){
        if(a[i]>max){
            sMax =max;
            max=a[i];
        }
        if(a[i]<max && a[i]>sMax){
            sMax=a[i];
        }

    }
    if(sMax==INT_MIN){
        printf("-1");
        return 0;
    }
    printf("%d",sMax);


}