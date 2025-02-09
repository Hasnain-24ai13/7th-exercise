#include <stdio.h>

int main() {
    float expenses[7], total = 0, dailyLimit;

    printf("Enter your daily budget limit: ");
    scanf("%f", &dailyLimit);

    for (int i = 0; i < 7; i++) {
        printf("Enter expenses for day %d: ", i + 1);
        scanf("%f", &expenses[i]);
        total += expenses[i];

        if (expenses[i] > dailyLimit) {
            printf("Overspent on day %d by %.2f PKR!\n", i + 1, expenses[i] - dailyLimit);
        }
    }

    float avg = total / 7;
    printf("\nTotal Weekly Spending: %.2f PKR\nAverage Daily Spending: %.2f PKR\n", total, avg);

    return 0;
}
