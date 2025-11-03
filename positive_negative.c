#include <stdio.h>

int main() {
    float num;

    // Step 1: Input
    printf("Enter a number: ");
    scanf("%f", &num);

    // Step 2: Check and Display
    if (num > 0)
        printf("The number is Positive.\n");
    else if (num < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");

    return 0;
}

/*
output:

Enter a number: 12
The number is Positive.

Enter a number: -5
The number is Negative.

Enter a number: 0
The number is Zero.
*/
