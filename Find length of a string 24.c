#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    printf("Length = %lu\n", strlen(str));
    return 0;
}
