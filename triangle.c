#include <stdio.h>

// Function to print a right-angled triangle of asterisks
void printTriangle(int n) {
    for (int i = 1; i <= n; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Loop for printing stars in each row
            printf("* "); // Print a star followed by a space
        }
        printf("\n"); // Move to the next line after each row
    }
}

int main() {
    int N = 5; // Set N to 5 directly

    // Call the function to print the triangle
    printTriangle(N);

    return 0;
}
