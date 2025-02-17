#include <stdio.h>

int main() {
    int N, acceptedCount = 0, rejectedCount = 0;
    
    // Input number of products
    printf("Enter number of products: ");
    scanf("%d", &N);

    // Array to store weights
    int weights[N];

    // Input weights of products
    printf("Enter weights (in grams): ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &weights[i]);
    }

    // Process weights and count accepted and rejected products
    for (int i = 0; i < N; i++) {
        if (weights[i] >= 950 && weights[i] <= 1050) {
            acceptedCount++;
        } else {
            rejectedCount++;
        }
    }

    // Output results
    printf("Accepted Products: %d\n", acceptedCount);
    printf("Rejected Products: %d\n", rejectedCount);

    return 0;
}
