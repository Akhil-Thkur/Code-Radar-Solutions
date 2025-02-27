#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int lsb = x & 1;  
    printf("%d",lsb);
    return 0;
}
