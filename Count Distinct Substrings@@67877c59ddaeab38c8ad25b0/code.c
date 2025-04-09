#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 1000

// Function to compare two strings
bool isSame(char str1[], char str2[]) {
    return strcmp(str1, str2) == 0;
}

// Function to check if a substring already exists
bool isPresent(char substrings[][MAX], int count, char *str) {
    for (int i = 0; i < count; i++) {
        if (isSame(substrings[i], str)) {
            return true;
        }
    }
    return false;
}

int main() {
    char str[MAX];
 
    scanf("%s", str);

    int len = strlen(str);
    char substrings[MAX * (MAX + 1) / 2][MAX];  // store all substrings
    int count = 0;

    // Generate all substrings
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            char temp[MAX] = "";
            int index = 0;

            for (int k = i; k <= j; k++) {
                temp[index++] = str[k];
            }
            temp[index] = '\0';

            if (!isPresent(substrings, count, temp)) {
                strcpy(substrings[count++], temp);
            }
        }
    }

    printf(" %d\n", count);
    return 0;
}
.