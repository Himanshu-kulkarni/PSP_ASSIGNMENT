#include <stdio.h>

int main() 
{
    float a, b;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    
    // Display arithmetic operations
    printf("Addition: %.2f\n", a + b);
    printf("Subtraction: %.2f\n", a - b);
    printf("Multiplication: %.2f\n", a * b);
    
    if(b != 0)
        printf("Division: %.2f\n", a / b);
    else
        printf("Division: Undefined (division by zero)\n");
    
    return 0;
}