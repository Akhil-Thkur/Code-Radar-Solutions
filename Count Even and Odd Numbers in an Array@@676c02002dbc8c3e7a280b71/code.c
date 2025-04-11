#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int arr[x];

    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < x; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("%d\n", evenCount);
    printf("%d\n", oddCount);

    return 0;
}
