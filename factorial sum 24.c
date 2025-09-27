#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;  // Use long long to handle larger factorials

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Loop to calculate factorial
        for(i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
