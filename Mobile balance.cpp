#include <stdio.h>

float remainingBalance(float amount) {
    float fed = amount * 0.195;
    float serviceCharges = amount * 0.10;
    return amount - (fed + serviceCharges);
}

int main() {
    float amount;
    printf("Enter recharge amount (PKR): ");
    scanf("%f", &amount);

    float balance = remainingBalance(amount);
    printf("Available Balance = %.2f PKR\n", balance);

    return 0;
}
