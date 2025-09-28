#include <stdio.h>
int main() {
    int arr[10], n=5, num;
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter number to insert: "); scanf("%d",&num);
    for(int i=n;i>0;i--) arr[i]=arr[i-1];
    arr[0]=num; n++;
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
