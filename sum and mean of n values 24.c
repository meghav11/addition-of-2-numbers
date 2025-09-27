#include <stdio.h>

int main() {
    int n, i, value, sum = 0;
    float mean;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        sum += value;
    }

    mean = sum / (float)n;
    printf("Sum = %d, Mean = %.2f\n", sum, mean);

    return 0;
}
