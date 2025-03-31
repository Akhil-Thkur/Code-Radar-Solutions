#include <stdio.h>

int main() {
    int a[5], i, j, temp;

    // Input the array
    printf("Enter 5 elements for the array: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Sorting using Bubble Sort / Selection Sort method
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {  // Swap if a[i] > a[j]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Check if the array is sorted
    int isSorted = 1; // Assume it's sorted
    for (i = 0; i < 4; i++) {  // Only check up to the second last element
        if (a[i] > a[i + 1]) { // If any element is greater than the next, it's not sorted
            isSorted = 0;
            break;
        }
    }

    // Printing the sorted array
    printf("Sorted array elements: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);  // Corrected printf statement
    }
    // printf("\n");

    // Check and display if the array is sorted
    if (isSorted) {
        printf("Sorted");
    } else {
        printf("NOT Sorted");
    }

    return 0;
}
