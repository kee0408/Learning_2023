// level 2 program 1
#include <stdio.h>

void swapAlternateElements(int arr[], int size) {
    int i;
    int temp;

    for (i = 0; i < size - 1; i += 2) {
        temp = arr[i];
        arr[i] = arr[i + 2];
        arr[i + 2] = temp;
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {4, 8, 12, 17, 34};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Original array: ");
    printArray(arr1, size1);

    swapAlternateElements(arr1, size1);

    printf("Array after swapping alternate elements: ");
    printArray(arr1, size1);

    

    return 0;
}
