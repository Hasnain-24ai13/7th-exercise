#include <stdio.h>

float convertCurrency(float amount, char currencyType) {
    float exchangeRate;
    
    printf("Enter exchange rate for %c to PKR: ", currencyType);
    scanf("%f", &exchangeRate);

    return amount * exchangeRate;
}

int main() {
    float amount;
    char currencyType;

    printf("Enter amount and currency type (U for USD, S for SAR, A for AED): ");
    scanf("%f %c", &amount, &currencyType);

    float convertedAmount = convertCurrency(amount, currencyType);
    printf("PKR = %.2f\n", convertedAmount);

    return 0;
}
