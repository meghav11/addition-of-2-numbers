#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int a=0,e=0,i=0,o=0,u=0;
    printf("Enter string: ");
    gets(str);
    for(int j=0; str[j]!='\0'; j++) {
        char ch = tolower(str[j]);
        if(ch=='a') a++;
        else if(ch=='e') e++;
        else if(ch=='i') i++;
        else if(ch=='o') o++;
        else if(ch=='u') u++;
    }
    printf("a:%d e:%d i:%d o:%d u:%d\n", a,e,i,o,u);
    return 0;
}
