#include <stdio.h>
int main() {
    float cost price,selling price;
    scanf("%f %f",&cost price,&selling price)
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