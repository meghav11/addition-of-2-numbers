#include <stdio.h>

int main() {
    float gross, allowances, deductions, net;

    // Input gross salary
    printf("Enter gross salary: ");
    scanf("%f", &gross);

    // Check conditions
    if (gross > 10000) {
        allowances = gross * 0.10;   // 10% allowance
        deductions = gross * 0.03;   // 3% deduction
    } else if (gross > 5000) {
        allowances = gross * 0.07;   // 7% allowance
        deductions = gross * 0.02;   // 2% deduction
    } else {
        allowances = 0;
        deductions = 0;
    }

    // Calculate net salary
    net = gross + allowances - deductions;

    // Output result
    printf("Gross Salary   = %.2f\n", gross);
    printf("Allowances     = %.2f\n", allowances);
    printf("Deductions     = %.2f\n", deductions);
    printf("Net Salary     = %.2f\n", net);

    return 0;
}

