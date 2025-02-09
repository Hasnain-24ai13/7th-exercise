#include <stdio.h>
#include <string.h>

float internetPackageCost(int GB, char network[]) {
    if (strcmp(network, "Zong") == 0) return GB * 100;
    else if (strcmp(network, "Jazz") == 0) return GB * 120;
    else if (strcmp(network, "Telenor") == 0) return GB * 90;
    else return -1; 
}

int main() {
    int GB;
    char network[20];

    printf("Enter internet package (GB): ");
    scanf("%d", &GB);
    printf("Enter network (Zong, Jazz, Telenor): ");
    scanf("%s", network);

    float cost = internetPackageCost(GB, network);
    
    if (cost == -1) printf("Invalid network!\n");
    else printf("Cost = %.2f PKR\n", cost);

    return 0;
}
