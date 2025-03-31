#include<stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);
    for(int i = rows; i<=rows;i++){
        for(int j =i;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}