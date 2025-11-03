#include <stdio.h>

int main() {
    float basic, da, hra, gross;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    // Calculate DA and HRA
    da = 0.50 * basic;  // 50% of basic
    hra = 0.20 * basic; // 20% of basic

    // Calculate gross salary
    gross = basic + da + hra;

    // Display results
    printf("Basic Salary: %.2f\n", basic);
    printf("DA (50%%): %.2f\n", da);
    printf("HRA (20%%): %.2f\n", hra);
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}

/*
input:
Enter the basic salary: 60

output:
Basic Salary: 60.00
DA (50%): 30.00
HRA (20%): 12.00
Gross Salary: 102.00
*/
