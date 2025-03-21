#include <stdio.h>
#include <string.h>

int countVowels(const char *str) {
    int count = 0;
    char vowels[] = "aeiouAEIOU"; // Consider both uppercase and lowercase vowels
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (strchr(vowels, str[i])) { // Check if the character is a vowel
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets