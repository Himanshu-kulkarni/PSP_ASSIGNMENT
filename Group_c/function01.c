#include <stdio.h>

// function declaration
float multiply(float a, int b);

int main() {
    float x;
    int y;
    float result;

    printf("Enter a float number: ");
    scanf("%f", &x);

    printf("Enter an integer: ");
    scanf("%d", &y);

    result = multiply(x, y);  // function call

    printf("Product = %.2f", result);

    return 0;
}

// function definition
float multiply(float a, int b) {
    return a * b;
}
