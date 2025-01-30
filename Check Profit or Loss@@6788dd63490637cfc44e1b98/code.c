#include <stdio.h>
int main() {
    float cost price,selling price;
    scanf("%f %f",&cost price,&selling price)
    if(sellingPrice>costPrice){
        printf("Profit");
    }
    else if(costPrice>sellingPrice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}