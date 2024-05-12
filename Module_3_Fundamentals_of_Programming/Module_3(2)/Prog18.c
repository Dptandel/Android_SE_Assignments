// Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

int main() {
    int cost_price, selling_price, profit_loss;

    printf("Enter the cost price: ");
    scanf("%d", &cost_price);

    printf("Enter the selling price: ");
    scanf("%d", &selling_price);

    profit_loss = selling_price - cost_price;

    if (profit_loss > 0) {
        printf("Profit = %d\n", profit_loss);
    } else if (profit_loss < 0) {
        printf("Loss = %d\n", profit_loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}