#include <stdio.h>
int main() {
    char op;
    double a,b,result;
    scanf("%c",&op)
    scanf("%lf %lf",&a,&b);
    switch(op){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("&d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("Error");
    }
    return 0;
}