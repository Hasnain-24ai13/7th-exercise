#include <stdio.h>

float calculateZakat(float totalWealth, float goldRate) {
    float nisabGold = 87.48 * goldRate;
    
    if (totalWealth >= nisabGold) {
        return totalWealth * 0.025;
    } else {
        return 0;
    }
}

int main() {
    float totalWealth, goldRate;
    
    printf("Enter total wealth (in PKR): ");
    scanf("%f", &totalWealth);
    
    printf("Enter current gold rate per gram (in PKR): ");
    scanf("%f", &goldRate);
    
    float zakat = calculateZakat(totalWealth, goldRate);
    
    if (zakat > 0) {
        printf("Zakat Payable = %.2f PKR\n", zakat);
    } else {
        printf("Zakat is not applicable as total wealth is below the Nisab threshold.\n");
    }
    
    return 0;
}