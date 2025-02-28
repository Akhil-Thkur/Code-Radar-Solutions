#include<stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x==y) {
        printf("Equal");
    }
    else if (x<y) {
        print("First");
    }
    else{
        printf("Second");
    }
}