#include <stdio.h>
#include <math.h>

int main() {
    int x, b;
    scanf("%d", &x);
    scanf("%d", &b);

    if (b == sqrt(x)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
