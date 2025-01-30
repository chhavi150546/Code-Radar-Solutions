#include <stdio.h>
int main() {
    int a,b,greatest;
    scanf("%d %d",&a,&b)
    if(a>=b){
        greatest=a;
    }
    else{
        greatest=b;
    }
    printf("Greater integer:%d\n",greatest);
    return 0;
}