#include <stdio.h>

int sumAlternateElements(int arr[], int size) {
    int sum = 0;
    int i;

    for (i = 0; i < size; i += 2) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {1, 5, 9, 15, 19};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sumAlternateElements(arr, size);
    printf("Sum of alternate elements: %d\n", result);

    return 0;
}
