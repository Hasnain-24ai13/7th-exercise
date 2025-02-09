#include <stdio.h>

int main() {
    int steps[24], total = 0, maxSteps = 0, minSteps = 100000, maxHour = 0, minHour = 0;

    for (int i = 0; i < 24; i++) {
        printf("Enter steps for hour %d: ", i + 1);
        scanf("%d", &steps[i]);
        total += steps[i];

        if (steps[i] > maxSteps) {
            maxSteps = steps[i];
            maxHour = i + 1;
        }
        if (steps[i] < minSteps) {
            minSteps = steps[i];
            minHour = i + 1;
        }
        if (steps[i] == 0) {
            printf("Warning: No steps recorded in hour %d (Inactivity detected!)\n", i + 1);
        }
    }

    float avg = total / 24.0;
    printf("\nTotal Steps: %d\nAverage Steps per Hour: %.2f\n", total, avg);
    printf("Max Steps: %d at Hour %d\nMin Steps: %d at Hour %d\n", maxSteps, maxHour, minSteps, minHour);

    return 0;
}
