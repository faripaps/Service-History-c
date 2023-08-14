#include <stdio.h>

// Function to calculate the number of services required based on distance traveled
int calculateServices(int distance) {
    int numOfServices = distance / 5000;
    return numOfServices;
}

int main() {
    int distance;

    printf("Enter the distance traveled in kilometers: ");
    scanf("%d", &distance);

    int numOfServices = calculateServices(distance);

    printf("Total number of services required every 5000 kms: %d\n", numOfServices);

    return 0;
}
