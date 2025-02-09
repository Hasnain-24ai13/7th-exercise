#include <stdio.h>

int main() {
    float temp[30], total = 0, maxTemp = -100, minTemp = 100;
    int maxDay = 0, minDay = 0;

    for (int i = 0; i < 30; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temp[i]);
        total += temp[i];

        if (temp[i] > maxTemp) {
            maxTemp = temp[i];
            maxDay = i + 1;
        }
        if (temp[i] < minTemp) {
            minTemp = temp[i];
            minDay = i + 1;
        }
    }

    float avg = total / 30;
    printf("\nAverage Monthly Temperature: %.2f°C\n", avg);
    printf("Highest Temperature: %.2f°C on Day %d\n", maxTemp, maxDay);
    printf("Lowest Temperature: %.2f°C on Day %d\n", minTemp, minDay);

    printf("Days with temperature above average:\n");
    for (int i = 0; i < 30; i++) {
        if (temp[i] > avg) {
            printf("Day %d: %.2f°C", i + 1, temp[i]);
            if (temp[i] > 35) printf(" (Hot Day!)");
            printf("\n");
        }
    }

    return 0;
}
