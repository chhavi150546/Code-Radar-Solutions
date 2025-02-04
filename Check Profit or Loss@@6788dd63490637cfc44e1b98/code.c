#include <stdio.h>
int main() {
    int c,s;
    scanf("%d %d",&c,&s);
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