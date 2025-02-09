#include <stdio.h>

float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {
    float fuelNeeded = distance / fuelAverage;
    return fuelNeeded * fuelPrice;
}

int main() {
    float distance, fuelAverage, fuelPrice;

    printf("Enter total trip distance (in km): ");
    scanf("%f", &distance);
    
    printf("Enter vehicle's fuel consumption (km per liter): ");
    scanf("%f", &fuelAverage);
    
    printf("Enter current fuel price per liter (PKR): ");
    scanf("%f", &fuelPrice);

    float totalCost = calculateFuelCost(distance, fuelAverage, fuelPrice);
    printf("Total Fuel Cost = %.2f PKR\n", totalCost);

    return 0;
}