#include<stdio.h>
int main () {
    int a[5],i,j,temp;
    printf("Enter the array : ");
    for (i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++) {
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int isSorted = 1; // Assume it's sorted
    for (i = 0; i < 4; i++) {  // Only check up to the second last element
        if (a[i] > a[i + 1]) { // If any element is greater than the next, it's not sorted
            isSorted = 0;
            break;
        }
    printf("array element : ");
    for(i=0;i<5;i++){
        printf("%d",&a[i]);
    }
    if (isSorted) {
        printf("Sorted");
    } else {
        printf(" NOT Sorted");
    }
}
}