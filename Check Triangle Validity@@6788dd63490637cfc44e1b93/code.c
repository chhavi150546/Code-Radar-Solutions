#include <stdio.h>
int main() {
    float x,y,z;
    scanf("%f %f %f",&x,&y,&z)
    if((x+y>z)&&(x+y>y)&&(y+z>x)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}