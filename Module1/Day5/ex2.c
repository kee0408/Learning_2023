#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

// Function to read a complex number from the user
void readComplex(struct Complex* complex) {
    printf("Enter the real part: ");
    scanf("%f", &complex->real);
    printf("Enter the imaginary part: ");
    scanf("%f", &complex->imag);
}

// Function to write a complex number to the console
void writeComplex(struct Complex complex) {
    printf("Complex number: %.2f + %.2fi\n", complex.real, complex.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.real = complex1.real + complex2.real;
    result.imag = complex1.imag + complex2.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.real = complex1.real * complex2.real - complex1.imag * complex2.imag;
    result.imag = complex1.real * complex2.imag + complex1.imag * complex2.real;
    return result;
}

int main() {
    struct Complex complex1, complex2;

    printf("Enter the first complex number:\n");
    readComplex(&complex1);

    printf("Enter the second complex number:\n");
    readComplex(&complex2);

    printf("\n");

    printf("First complex number:\n");
    writeComplex(complex1);

    printf("Second complex number:\n");
    writeComplex(complex2);

    printf("\n");

    struct Complex sum = addComplex(complex1, complex2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    struct Complex product = multiplyComplex(complex1, complex2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);

    return 0;
}
