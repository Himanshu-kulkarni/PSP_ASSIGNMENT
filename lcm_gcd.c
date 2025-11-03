#include <stdio.h>

int main() {
    int a, b, temp_a, temp_b, r, gcd, lcm;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp_a = a;
    temp_b = b;

    // Find GCD using Euclid's algorithm
    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    gcd = a;

    // Find LCM
    lcm = (temp_a * temp_b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}

/*
input:
Enter two numbers: 12 18

output:
GCD = 6
LCM = 36
*/