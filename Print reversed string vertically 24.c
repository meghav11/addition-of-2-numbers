#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    int n = strlen(str);
    for(int i=n-1; i>=0; i--)
        printf("%c\n", str[i]);
    return 0;
}
