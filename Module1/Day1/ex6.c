//level2 program 1 
#include <stdio.h>

int findGreatest(int x, int y, int z) {
    int greatest = x;  

    if (y > greatest) {
        greatest = y; 
    }

    if (z > greatest) {
        greatest = z;  
    }

    return greatest;
}

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int result = findGreatest(a, b, c);
    printf("The greatest number is: %d\n", result);

    return 0;
}
