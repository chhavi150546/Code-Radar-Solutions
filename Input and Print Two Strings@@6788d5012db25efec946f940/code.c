#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str1[50],str2=[50];
    scanf("%s %s",str1 ,str2);
    printf("You entered: %s and %s", str1,str2);
    return 0;
}