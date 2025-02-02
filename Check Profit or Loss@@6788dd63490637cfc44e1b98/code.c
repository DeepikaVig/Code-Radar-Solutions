#include <stdio.h>


int main() {
    int cost_prc , sell_prc;
    scanf("%d%d",&cost_prc,&sell_prc);
    if (cost_prc>sell_prc){
        printf("Loss");

    }
    else if (cost_prc<sell_prc){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}