#include <stdio.h>
#include <string.h>

#define CAR_RATE 5
#define TRUCK_RATE 10
#define BUS_RATE 8

int main() {
    char vehicleType[10];
    int distance;
    float baseCharge, discount = 0.0, totalTollTax;

    // Input vehicle type
    printf("Enter Vehicle Type (Car/Truck/Bus): ");
    scanf("%s", vehicleType);

    // Input distance traveled
    printf("Enter Distance Traveled (km): ");
    scanf("%d", &distance);

    // Calculate base charge based on vehicle type
    if (strcmp(vehicleType, "Car") == 0) {
        baseCharge = CAR_RATE * distance;
    } else if (strcmp(vehicleType, "Truck") == 0) {
        baseCharge = TRUCK_RATE * distance;
        // Apply discount for trucks traveling more than 500 km
        if (distance > 500) {
            discount = baseCharge * 0.10; // 10% discount
        }
    } else if (strcmp(vehicleType, "Bus") == 0) {
        baseCharge = BUS_RATE * distance;
        // Apply discount for buses traveling more than 300 km
        if (distance > 300) {
            discount = baseCharge * 0.05; // 5% discount
        }
    } else {
        printf("Invalid vehicle type entered.\n");
        return 1; // Exit with error code
    }

    // Calculate total toll tax
    totalTollTax = baseCharge - discount;

    // Output results
    printf("Vehicle Type: %s\n", vehicleType);
    printf("Distance Traveled: %d km\n", distance);
    printf("Base Charge: ₹%.2f\n", baseCharge);
    printf("Discount: ₹%.2f\n", discount);
    printf("Total Toll Tax: ₹%.2f\n", totalTollTax);

    return 0;
}
