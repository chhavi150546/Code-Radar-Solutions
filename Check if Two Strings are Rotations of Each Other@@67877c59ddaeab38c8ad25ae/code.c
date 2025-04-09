// Your code here...
#include <stdio.h>
#include <string.h>

// Function to check if one string is a rotation of another
int isRotation(char *str1, char *str2) {
    // Check if lengths of both strings are the same
    if (strlen(str1) != strlen(str2)) {
        return 0; // Not rotations if lengths differ
    }

    // Create a concatenated string by appending str1 to itself
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of the concatenated string
    if (strstr(temp, str2) != NULL) {
        return 1; // str2 is a rotation of str1
    }

    return 0; // str2 is not a rotation of str1
}

int main() {
    char str1[100], str2[100];

    // Input the strings
   
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character

    
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character

    // Check rotation
    if (isRotation(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No");
    }

    return 0;
}