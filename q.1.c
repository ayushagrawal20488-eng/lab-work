// Write a program in c to count total number of words in a string.

#include <stdio.h>

int main() {
    char str[100];
    int words = 1; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            words++;
        }
    }
    printf("Total words: %d\n", words);
    return 0;
}