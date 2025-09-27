#include <stdio.h>

int main() {
    int n, i;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d natural numbers are:\n", n);

    // Loop from 1 to n
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
