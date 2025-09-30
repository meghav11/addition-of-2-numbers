#include <stdio.h>
int main() {
    int arr[10], val, found=0;
    for(int i=0;i<10;i++) scanf("%d",&arr[i]);
    printf("Enter value to search: "); scanf("%d",&val);
    for(int i=0;i<10;i++)
        if(arr[i]==val){ found=1; break; }
    if(found) printf("Value found\n");
    else printf("Value not found\n");
    return 0;
}
