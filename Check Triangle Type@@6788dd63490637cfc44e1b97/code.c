#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a=b=c) {
        printf("Equilateral");
    }
    else if ((a==b && b==a) !=c) {
        printf("Isosceles");
    }
    else {
        printf("scalene");
    }
    return 0;
}