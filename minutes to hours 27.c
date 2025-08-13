#include <stdio.h>

int main() {
    int minutes;
    float hours;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60.0;

    printf("Hours: %.2f\n", hours);

    return 0;
}
