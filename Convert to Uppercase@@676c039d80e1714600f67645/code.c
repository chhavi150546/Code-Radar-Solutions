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
