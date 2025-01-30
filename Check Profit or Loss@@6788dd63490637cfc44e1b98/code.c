#include <stdio.h>
int main() {
    float c,s;
    scanf("%f %f",&c,&s)
    if(s>c){
        printf("Profit");
    }
    else if(s<c){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}