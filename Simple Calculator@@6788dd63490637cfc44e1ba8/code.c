#include <stdio.h>
int main() {
    double a,b;
    int result;
    char str;
    scanf("%lf %lf %c",&a,&b,&str);
    if (str=='+'){
        result=a+b;
        printf("%d",result);
    }
    else if(str=='-'){
        result=a-b;
        printf("%d",result);
    }
    else if(str='/'){
        if(b==0){
            printf("error");
        }
        else{
            result=a/b;
            printf("%d",result);
        }
    }
    else if(str=='*'){
        result=a*b;
        printf("%d\n",result);
    }
    else{
        printf("error");
    }
    return 0;
}