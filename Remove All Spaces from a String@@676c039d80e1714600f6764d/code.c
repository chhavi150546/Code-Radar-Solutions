// Your code here...
#include <stdio.h>

void removeSpaces(char *str) {
    int i = 0, j = 0;
    
    // Traverse the string
    while (str[i]) {
        // Copy only non-space characters
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  // Null-terminate the modified string
}

int main() {
    char str[100];

  
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';



    removeSpaces(str);

    printf("%s\n", str);

    return 0;
}