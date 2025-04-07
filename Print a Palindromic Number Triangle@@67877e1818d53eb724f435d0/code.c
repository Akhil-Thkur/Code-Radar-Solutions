#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    for (int i = 0; i <= x; i++) {
        for (int s = 1; s <= x - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
