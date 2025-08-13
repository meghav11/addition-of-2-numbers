#include <stdio.h>

int main() {
    double bytes, kb, mb, gb;

    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);

    kb = bytes / 1024;
    mb = bytes / (1024 * 1024);
    gb = bytes / (1024 * 1024 * 1024);

    printf("Kilobytes: %.2lf KB\n", kb);
    printf("Megabytes: %.2lf MB\n", mb);
    printf("Gigabytes: %.2lf GB\n", gb);

    return 0;
}
