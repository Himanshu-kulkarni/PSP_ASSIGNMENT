#include <stdio.h>

int main() {
    float a, b, c;

    // Step 1: Input three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    // Step 2: Compare and find largest
    if (a > b && a > c)
        printf("The largest number is: %.2f\n", a);
    else if (b > a && b > c)
        printf("The largest number is: %.2f\n", b);
    else
        printf("The largest number is: %.2f\n", c);

    return 0;
}

/*
output:

Enter three numbers: 4 9 2
The largest number is: 9.00
*/