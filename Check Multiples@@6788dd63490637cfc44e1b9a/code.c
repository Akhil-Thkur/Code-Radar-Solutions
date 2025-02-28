#include<stdio.h>
int main() {
    int x,y;
    scnaf("%d",&x);
    scnaf("%d",&y);
    if (x%y==0) {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}