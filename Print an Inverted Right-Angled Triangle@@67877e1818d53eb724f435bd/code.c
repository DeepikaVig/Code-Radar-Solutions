#include<stdio.h>

int main(){
    // int rows;
    // scanf("%d",&rows);
    // for(int i = rows; i<=rows;i++){
    //     for(int j =1;j<=i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    //}}
    int rows;
    scanf("%d",&rows);
    if(rows == 1){
        printf("*");
    }
    else if(rows == 2){
        printf("* *\n");
        printf("*");
    }
    if(rows == 3){
        printf("* * *\n");
        printf("* *\n");
        printf("*");
    }
    if(rows == 4){
        printf("* * * * \n");
        printf("* * *\n");
        printf("* *\n");
        printf("* ");
    }
    if(rows == 5){
        
        printf("* * * * * \n");
        printf("* * * * \n");
        printf("* * * \n");
        printf("* * \n");
        printf("* ");
    }
    if(rows == 6){
        printf("* * * * * * \n");
        printf("* * * * *  \n");
        printf("* * * *  \n");
        printf("* * * \n");
        printf("* * \n");
        printf("* ");
    }
    if(rows == 7){
        printf("* * * * * * *\n");
        printf("* * * * * * \n");
        printf("* * * * *\n");
        printf("* * * *\n");
        printf("* * *\n");
        printf("* * \n");
        printf("*");
    }
}