#include <stdio.h>

int countSetBits(int num) {
    int count = 0;

    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

int totalSetBits(int arr[], int size) {
    int totalBits = 0;
    int i;

    for (i = 0; i < size; i++) {
        totalBits += countSetBits(arr[i]);
    }

    return totalBits;
}

int main() {
    int arr[] = {0x8, 0xF3, 0x10101};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = totalSetBits(arr, size);
    printf("Total number of set bits: %d\n", result);

    return 0;
}
