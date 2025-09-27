#include <stdio.h>

int main() {
    char name[50];
    int n, i;

    // Input name
    printf("Enter your name: ");
    scanf("%s", name);

    // Input number of times to print
    printf("Enter the number of times to print your name: ");
    scanf("%d", &n);

    // Loop to print name n times
    for(i = 1; i <= n; i++) {
        printf("%s\n", name);
    }

    return 0;
}
