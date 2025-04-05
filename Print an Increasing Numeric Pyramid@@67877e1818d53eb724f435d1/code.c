#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        // Print spaces
        for (int s = 1; s <= x - i; s++) {
            printf(" ");
        }

        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
