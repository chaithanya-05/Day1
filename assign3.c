#include <stdio.h>
#include <string.h>

// Function to calculate toll based on vehicle type
int calculateToll(char vehicleType[]) {
    if (strcmp(vehicleType, "Car") == 0) {
        return 50; // Toll for Car
    } else if (strcmp(vehicleType, "Truck") == 0) {
        return 100; // Toll for Truck
    } else if (strcmp(vehicleType, "Bike") == 0) {
        return 20; // Toll for Bike
    } else {
        return 0; // Unknown vehicle type
    }
}

// Function to track total revenue
int trackRevenue(int numberOfVehicles) {
    int totalRevenue = 0;
    char vehicleType[10]; // Assuming vehicle type names will not exceed 9 characters

    for (int i = 0; i < numberOfVehicles; i++) {
        printf("Enter vehicle type (Car/Truck/Bike): ");
        scanf("%s", vehicleType);
        totalRevenue += calculateToll(vehicleType);
    }

    return totalRevenue;
}

int main() {
    int N;

    // Input number of vehicles
    printf("Enter number of vehicles: ");
    scanf("%d", &N);

    // Track total revenue
    int totalRevenue = trackRevenue(N);

    // Output total revenue
    printf("Total Toll Collection: ₹%d\n", totalRevenue);

    return 0;
}
