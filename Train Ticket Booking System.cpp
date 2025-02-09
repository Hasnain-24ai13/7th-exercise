#include <stdio.h>
#include <string.h>

float calculateTrainFare(char class[], float distance) {
    if (strcmp(class, "Economy") == 0) return distance * 5;
    else if (strcmp(class, "Business") == 0) return distance * 10;
    else if (strcmp(class, "First") == 0) return distance * 15;
    else return -1;
}

int main() {
    char class[20];
    float distance;

    printf("Enter travel distance (km): ");
    scanf("%f", &distance);
    printf("Enter class (Economy, Business, First): ");
    scanf("%s", class);

    float fare = calculateTrainFare(class, distance);
    
    if (fare == -1) printf("Invalid class!\n");
    else printf("Fare = %.2f PKR\n", fare);

    return 0;
}
