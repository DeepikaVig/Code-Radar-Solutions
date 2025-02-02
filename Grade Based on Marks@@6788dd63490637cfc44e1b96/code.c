#include <stdio.h>

int main() {
    int grades;
    scanf("%d",&grades);
    if (grades>=90){
        printf("A");
    }
    else if(grades>=80 && grades<90){
        printf("B");
    }
    else if( grades>=70 && grades<80){
        printf("C");
    }
    else if (grades>=60 && grades <70){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}