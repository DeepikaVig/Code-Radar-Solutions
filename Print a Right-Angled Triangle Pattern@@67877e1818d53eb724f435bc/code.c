// Your code here...
#include<stdio.h>
void main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for(int j =1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}