#include <stdio.h>



int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("True");
    }
    else{
        printf("False");
    }
    printf("%s", welcome());
    return 0;
}