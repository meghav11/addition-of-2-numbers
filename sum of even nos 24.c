#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate sum of first n even numbers
    for(i = 1; i <= n; i++) {
        sum += 2 * i;  // Even numbers are 2, 4, 6, ...
    }

    // Print the sum
    printf("Sum of first %d even numbers = %d\n", n, sum);

    return 0;
}
