#include <stdio.h>


int main() {
    int cost_prc , sell_prc;
    scanf("%d%d",&cost_prc,&sell_prc);
    if (cost_prc>sell_prc){
        printf("Loss");

    }
    else{
        printf("Profit");
    }
    return 0;
}