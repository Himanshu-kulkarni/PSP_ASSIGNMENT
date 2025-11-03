#include <stdio.h>

int main() {
    float totalSellingPrice, totalProfit, costPrice;
    int numberOfItems = 15;

    // Input total selling price and total profit
    printf("Enter total selling price of 15 items: ");
    scanf("%f", &totalSellingPrice);
    printf("Enter total profit earned: ");
    scanf("%f", &totalProfit);

    // Calculate cost price of one item
    costPrice = (totalSellingPrice - totalProfit) / numberOfItems;

    // Display result
    printf("Cost Price of one item = %.2f\n", costPrice);

    return 0;
}

/*
input:
Enter total selling price of 15 items: 56
Enter total profit earned: 30

output:
Cost Price of one item = 1.73
*/
