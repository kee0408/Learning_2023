#include <stdio.h>

void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    
}

void printSpaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printPattern(int n) {
    int i, j, k, x, y;
    
    for (i = n, x = 0; i >= 1; i--, x += 2) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (y = 1; y <= x; y++) {
            printf(" ");
        }
        for (k = i; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
} 