/*
 * 100 Days of Code - UPES
 * Day 44 | Date: 26-Sep-2026
 *
 * Q87: Count spaces, digits, and special characters in a string.
 *
 * Sample Test Cases:
 * Input 1:
 * a b1&2
 * Output 1:
 * Spaces=1, Digits=2, Special=1
 */


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n' || str[i] == '\r') {
            continue;  // ignore newline from fgets
        }

        if (str[i] == ' ') {
            spaces++;
        } else if (isdigit((unsigned char)str[i])) {
            digits++;
        } else if (!isalpha((unsigned char)str[i])) {
            special++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}
