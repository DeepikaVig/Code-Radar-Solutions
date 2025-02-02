#include <stdio.h>
int main() {
    int q;
    scanf("%d",&q);
    if(q==0){
        printf("Zero");
    }
    else if(q>0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    return 0;
}