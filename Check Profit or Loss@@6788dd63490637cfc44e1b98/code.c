#include <stdio.h>
int main() {
    int cost price,selling price;
    scanf("%d %d",&cost price,&selling price)
    if(selling price>cost price){
        printf("Profit");
    }
    else if(selling price<cost price){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}