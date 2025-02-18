#include <stdio.h>

// Function to print a right-angled triangle 
void printTriangle(int n) {
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= i; j++) { 
            printf("* "); 
        }
        printf("\n"); 
    }
}

int main() {
    int N = 5; // Set N to 5 directly

    // Call the function to print the triangle
    printTriangle(N);

    return 0;
}
