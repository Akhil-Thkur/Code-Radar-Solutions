#include<stdio.h>
int main () {
    int A,B,C,D,F;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);

    if (A>=90) {
        printf("%d",A);
    } 
    else if (B>=80) {
        printf(B);
    }
    else if (C>=70 && c<80) {
        printf("%d",C);
    }
    else if (D>=60 && D<70) {
        printf("%d",D);
    }
    else {
        printf("%d",F);
    }
    return 0;
}