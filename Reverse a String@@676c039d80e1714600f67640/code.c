#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);  // Using gets() to read a string with spaces

    // Reverse using strrev()
    strrev(str);

    // Print reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}


int main() {
    char str[100];

    // Taking input from the user

    gets(str);

    // Reversing the string
    reverseString(str);

    // Printing the reversed string
    printf("%s\n", str);

    return 0;
}
