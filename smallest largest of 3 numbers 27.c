#include<stdio.h>
void main(){
int a,b,c;
  printf("enter three numbers\n");
  scanf("%d %d %d",&a,&b,&c);
        if(a>b){
            if(a>c)
                printf("%d is largest %d is smallest ",a,b);
            else
                printf("%d is largest %d is smallest",c,b);
               }
        else{
            if(b>c)
                printf("%d is largest %d is smallest",b,a);
            else
                printf("%d is largest %d is smallest",c,a);
        }
}
