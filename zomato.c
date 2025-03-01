#include <stdio.h>


void displayOrderStatus(int status) {
    switch (status) {
        case 1:
            printf("Your order has been placed.\n");
            break;
        case 2:
            printf("Your food is being prepared.\n");
            break;
        case 3:
            printf("Your order is out for delivery.\n");
            break;
        case 4:
            printf("Your order has been delivered. Enjoy your meal!\n");
            break;
        default:
            printf("Invalid status. Please enter a number between 1 and 4.\n");
            break;
    }
}

int main() {
    int orderStatus;

    // Prompt user for input
    printf("Enter order status (1-4): ");
    scanf("%d", &orderStatus);

    // Display the corresponding order status message
    displayOrderStatus(orderStatus);

    return 0;
}
