#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substring[100];

    // Input the main string
  
    fgets(str, sizeof(str), stdin);

    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Input the substring
   
    fgets(substring, sizeof(substring), stdin);

    // Remove the newline character added by fgets
    substring[strcspn(substring, "\n")] = '\0';

    // Check if the substring exists in the main string
    if (strstr(str, substring) != NULL) {
        printf("Yes\n");  // Substring found
    } else {
        printf("No\n");   // Substring not found
    }

    return 0;
}