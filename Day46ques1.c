/*
 * 100 Days of Code - UPES
 * Day 46 | Date: 28-Sep-2026
 *
 * Q91: Remove all vowels from a string.
 *
 * Sample Test Cases:
 * Input 1:
 * education
 * Output 1:
 * dctn
 */


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}
