#include <stdio.h>
#include <stdint.h>

void printExponent(double number) {
    uint64_t* ptr = (uint64_t*)&number;  // Typecast double pointer to uint64_t pointer
    uint64_t exponentMask = 0x7FF0000000000000ULL;  // Exponent mask
    uint64_t exponent = (*ptr & exponentMask) >> 52;  // Extract exponent bits

    printf("Exponent in Hexadecimal: 0x%lX\n", exponent);
    printf("Exponent in Binary: 0b");

    int i;
    for (i = 10; i >= 0; i--) {
        uint64_t bit = (exponent >> i) & 1ULL;
        printf("%llu", bit);
    }

    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
