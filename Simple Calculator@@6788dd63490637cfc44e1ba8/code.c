#include <stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d %*c%c", &a, &b, &op); 
    if(op=='+'){
        printf("%d",a+b);
    }
    else if(op=='-'){
        printf("%d",a-b);
    }
    else if(op='/'){
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    
    }
    else if(op='*'){
        printf("%d",a*b);
    }
    else{
        printf("error");
    }

}
