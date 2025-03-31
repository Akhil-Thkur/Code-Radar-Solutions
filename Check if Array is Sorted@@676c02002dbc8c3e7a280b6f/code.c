#include <stdio.h>

// Function to check if the array is sorted
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int main() {
    int n;
    
    // Taking array size input
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking array elements input
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking if the array is sorted
    if (isSorted(arr, n)) {
        printf("Sorted.\n");
    } else {
        printf("Not Sorted.\n");
    }

    return 0;
}
