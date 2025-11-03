#include <stdio.h>

int main() {
    float cp, sp, profit, loss;

    // Step 1: Input
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    // Step 2: Check and Calculate
    if (sp > cp) {
        profit = sp - cp;
        printf("Profit = %.2f\n", profit);
    }
    else if (sp < cp) {
        loss = cp - sp;
        printf("Loss = %.2f\n", loss);
    }
    else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}

/*
output:

Enter Cost Price: 1000
Enter Selling Price: 1200
Profit = 200.00

Enter Cost Price: 1500
Enter Selling Price: 1200
Loss = 300.00

Enter Cost Price: 500
Enter Selling Price: 500
No Profit No Loss.
*/