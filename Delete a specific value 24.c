#include <stdio.h>
int main() {
    int arr[10], n=5, val;
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter value to delete: "); scanf("%d",&val);
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            for(int j=i;j<n-1;j++) arr[j]=arr[j+1];
            n--; i--;
        }
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
