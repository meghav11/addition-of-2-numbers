#include <stdio.h>
int main() {
    int arr[10], n=5;
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++) arr[i]=arr[i+1]; n--;
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
