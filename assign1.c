#include <stdio.h>

int main() {
    float salary;
    int creditScore, experience;

    // Input salary
    printf("Enter Salary: ");
    scanf("%f", &salary);

    // Input credit score
    printf("Enter Credit Score: ");
    scanf("%d", &creditScore);

    // Input work experience
    printf("Enter Experience (Years): ");
    scanf("%d", &experience);

    // Check eligibility conditions
    if (salary >= 30000 && creditScore >= 750 && experience >= 2) {
        printf("Loan Approved\n");
    } else {
        printf("Loan Denied\n");
    }

    return 0;
}
