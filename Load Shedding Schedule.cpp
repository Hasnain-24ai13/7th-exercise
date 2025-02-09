#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showLoadSheddingSchedule(char city[]) {
    char *timings[] = {"6 AM - 8 AM", "7 AM - 9 AM", "5 PM - 7 PM", "6 PM - 8 PM"};
    srand(time(0));

    printf("Load Shedding Schedule for %s:\n", city);
    for (int i = 0; i < 7; i++) {
        printf("Day %d: %s, %s\n", i + 1, timings[rand() % 4], timings[rand() % 4]);
    }
}

int main() {
    char city[50];
    printf("Enter your city: ");
    scanf("%s", city);

    showLoadSheddingSchedule(city);

    return 0;
}
