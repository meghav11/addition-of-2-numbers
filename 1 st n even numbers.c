#include <stdio.h>

int main() {
    int n, i;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d even numbers are:\n", n);

    // Loop to print first n even numbers
    for(i = 1; i <= n; i++) {
        printf("%d ", 2 * i);  // Multiply by 2 to get even numbers
    }

    printf("\n");
    return 0;
}
