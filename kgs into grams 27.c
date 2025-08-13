#include <stdio.h>

int main() {
    float kg, grams;

    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);

    grams = kg * 1000;

    printf("Weight in grams: %.2f\n", grams);

    return 0;
}
