#include <stdio.h>
#include <string.h>

#define MAX_UPI_LENGTH 50
#define MAX_CARD_LENGTH 17 // 16 digits + null terminator

// Function to process payment based on the selected method
void processPayment(int method) {
    char cardNumber[MAX_CARD_LENGTH];
    char upiID[MAX_UPI_LENGTH];
    int bankChoice;

    switch (method) {
        case 1: // Credit/Debit Card
            printf("Enter your 16-digit card number: ");
            scanf("%s", cardNumber);
            if (strlen(cardNumber) == 16) {
                printf("Payment Successful!\n");
            } else {
                printf("Transaction Failed. Please try again.\n");
            }
            break;

        case 2: // UPI
            printf("Enter your UPI ID: ");
            scanf("%s", upiID);
            // Simple validation for UPI ID (you can enhance this)
            if (strstr(upiID, "@") != NULL) {
                printf("Payment Successful!\n");
            } else {
                printf("Transaction Failed. Please try again.\n");
            }
            break;

        case 3: // Net Banking
            printf("Select your bank:\n");
            printf("1. SBI\n");
            printf("2. HDFC\n");
            printf("3. ICICI\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &bankChoice);
            if (bankChoice >= 1 && bankChoice <= 3) {
                printf("Payment Successful!\n");
            } else {
                printf("Transaction Failed. Please try again.\n");
            }
            break;

        default:
            printf("Invalid payment method. Please try again.\n");
            break;
    }
}

int main() {
    int paymentMethod;

    // Prompt user for payment method
    printf("Select Payment Method (1-3):\n");
    printf("1. Credit/Debit Card\n");
    printf("2. UPI\n");
    printf("3. Net Banking\n");
    printf("Enter your choice: ");
    scanf("%d", &paymentMethod);

    // Process the payment based on the selected method
    processPayment(paymentMethod);

    return 0;
}
