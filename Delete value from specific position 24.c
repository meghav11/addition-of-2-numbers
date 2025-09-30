#include <stdio.h>
int main() {
    int arr[10], n=5, pos;
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter position to delete: "); scanf("%d",&pos);
    for(int i=pos;i<n-1;i++) arr[i]=arr[i+1]; n--;
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
