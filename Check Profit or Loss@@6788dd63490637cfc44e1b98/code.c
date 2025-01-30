#include <stdio.h>
int main() {
    float costPrice,sellingPrice;
    scanf("%f %f",&costPrice,&sellingPrice)
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