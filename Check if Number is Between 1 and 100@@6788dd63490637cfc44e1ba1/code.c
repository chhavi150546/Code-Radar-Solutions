#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(0<=a<=100){
        printf("In Range");
    }
    else{
        printf("Ot of Range");
    }
    return 0;
}