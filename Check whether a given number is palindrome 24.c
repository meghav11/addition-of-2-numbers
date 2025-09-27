#include <stdio.h>

int main() {
    int num, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while(num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if(original == rev)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);

    return 0;
}
