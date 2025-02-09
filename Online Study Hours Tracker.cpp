#include <stdio.h>

int main() {
    float hours[7], total = 0;
    int goal = 35;

    for (int i = 0; i < 7; i++) {
        printf("Enter study hours for day %d: ", i + 1);
        scanf("%f", &hours[i]);
        total += hours[i];

        if (hours[i] > 10) {
            printf("Warning: Burnout Alert on day %d!\n", i + 1);
        }
    }

    printf("\nTotal Study Hours: %.2f\n", total);

    if (total >= goal) {
        printf("Great job! You met your study goal.\n");
    } else {
        printf("You fell short by %.2f hours. Keep pushing!\n", goal - total);
    }

    return 0;
}
