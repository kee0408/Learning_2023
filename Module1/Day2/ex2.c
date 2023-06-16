#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    unsigned char* p1 = (unsigned char*)a;
    unsigned char* p2 = (unsigned char*)b;

    while (size--) {
        unsigned char temp = *p1;
        *p1++ = *p2;
        *p2++ = temp;
    }
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    double val1 = 3.14, val2 = 2.71;
    printf("Before swap: val1 = %f, val2 = %f\n", val1, val2);
    swap(&val1, &val2, sizeof(double));
    printf("After swap: val1 = %f, val2 = %f\n", val1, val2);

    char ch1 = 'A', ch2 = 'B';
    printf("Before swap: ch1 = %c, ch2 = %c\n", ch1, ch2);
    swap(&ch1, &ch2, sizeof(char));
    printf("After swap: ch1 = %c, ch2 = %c\n", ch1, ch2);

    return 0;
}
