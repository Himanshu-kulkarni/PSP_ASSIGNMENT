#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    // Perform bitwise operations and display results
    printf("Bitwise AND (a & b) = %d\n", a & b);
    printf("Bitwise OR  (a | b) = %d\n", a | b);
    printf("Bitwise XOR (a ^ b) = %d\n", a ^ b);

    return 0;
}
