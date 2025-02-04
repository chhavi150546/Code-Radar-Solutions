#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;j++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}