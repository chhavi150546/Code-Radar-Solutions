#include <stdio.h>

int main() {
    char str[100];


    fgets(str, sizeof(str), stdin);  // read string with spaces

    for (int i = 0; str[i] != '\0'; i++) {
        // check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // convert to uppercase
        }
    }

    printf("%s", str);

    return 0;
}


 

    // Read input character by character, stop at newline or end of buffer
    while ((str[i] = getchar()) != '\n' && i < 99) {
        i++;
    }
    str[i] = '\0'; // Null-terminate the string



    toUpperCase(str);

    printf("%s\n", str);

    return 0;
}