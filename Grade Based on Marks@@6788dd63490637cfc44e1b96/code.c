#include<stdio.h>
int main () {
    int A,B,C,D,F;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    scanf("%d",&F);

    if (A>=90) {
        printf('A');
    } 
    else if (B>=80) {
        printf(B);
    }
    else if (C>=70 && C<80) {
        printf(C);
    }
    else if (D>=60 && D<70) {
        printf(D);
    }
    else {
        printf(F);
    }
    return 0;
}