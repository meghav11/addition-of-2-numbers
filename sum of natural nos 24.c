#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate sum
    for(i = 1; i <= n; i++) {
        sum += i;  // Add i to sum
    }

    // Print the sum
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
