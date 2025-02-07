#include <stdio.h>
int main() {
    int year;
    scanf("%d",&year);
    if (year=='2000' && year=='2024' && year=='1600' ){
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
    
    return 0;
}