#include <stdio.h>

int main() {
    float km, meters, centimeters, feet, inches;

    // Step 1: Input
    printf("Enter distance between two cities in kilometers: ");
    scanf("%f", &km);

    // Step 2: Conversion
    meters = km * 1000;
    centimeters = km * 100000;
    feet = km * 3280.84;
    inches = km * 39370.1;

    // Step 3: Output
    printf("\nDistance in meters: %.2f", meters);
    printf("\nDistance in centimeters: %.2f", centimeters);
    printf("\nDistance in feet: %.2f", feet);
    printf("\nDistance in inches: %.2f\n", inches);

    return 0;
}

/*
output:
Enter distance between two cities in kilometers: 5

Distance in meters: 5000.00
Distance in centimeters: 500000.00
Distance in feet: 16404.20
Distance in inches: 196850.50
*/