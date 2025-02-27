#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int lsb = x & 1;  

    printf("LSB of %d is: %d\n", x, lsb);
    return 0;
}
