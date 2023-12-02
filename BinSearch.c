#include <stdio.h>

void binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            printf("Element found at index %d\n", mid);
            return;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Element not found in the array\n");
}

int main() {
    int size, target;
    printf("How many numbers do you want to enter: ");
    scanf("%d", &size);

    int arr[size]; // Declare the array with the correct size

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to search: ");
    scanf("%d", &target);

    binarySearch(arr, 0, size - 1, target);

    return 0;
}
