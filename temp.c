#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Step 1: Input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Step 2: Conversion
    celsius = (fahrenheit - 32) * 5 / 9;

    // Step 3: Output
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}

/*
output: 
Enter temperature in Fahrenheit: 98.6
Temperature in Celsius: 37.00
*/
