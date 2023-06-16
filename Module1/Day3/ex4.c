#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

void findMinMaxDigits(int n, ...) {
    int i, num, smallest = INT_MAX, largest = INT_MIN;
    va_list args;
    va_start(args, n);

    for (i = 0; i < n; i++) {
        num = va_arg(args, int);

        while (num > 0) {
            int digit = num % 10;

            if (digit < smallest)
                smallest = digit;

            if (digit > largest)
                largest = digit;

            num /= 10;
        }
    }

    va_end(args);

    if (smallest == INT_MAX && largest == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallest);
        printf("Largest Digit: %d\n", largest);
    }
}

int main() {
    findMinMaxDigits(3, 8, 156, 123450);
    findMinMaxDigits(2, 1, 6);
    findMinMaxDigits(2, 0, 5);

    return 0;
}
