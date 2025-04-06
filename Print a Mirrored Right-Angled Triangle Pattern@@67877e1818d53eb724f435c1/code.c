#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        // Print spaces (x - i spaces)
        for (int j = 1; j <= x - i; j++) {
            printf(" ");
        }

        // Print stars (i stars)
        for (int k = 1; k <= i; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
