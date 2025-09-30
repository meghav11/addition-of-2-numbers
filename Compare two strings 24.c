#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    int cmp = strcmp(s1,s2);
    if(cmp==0) printf("Both strings are same\n");
    else if(cmp<0) printf("%s is smaller than %s\n", s1, s2);
    else printf("%s is greater than %s\n", s1, s2);
    return 0;
}
