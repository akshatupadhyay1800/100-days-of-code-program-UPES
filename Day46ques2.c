/*
 * 100 Days of Code - UPES
 * Day 46 | Date: 28-Sep-2026
 *
 * Q92: Find the first repeating lowercase alphabet in a string.
 *
 * Sample Test Cases:
 * Input 1:
 * stress
 * Output 1:
 * s
 */


#include <stdio.h>

int main(void) {
    char str[1000];
    int frequency[26] = {0};
    int i;
    char firstRepeating = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            frequency[str[i] - 'a']++;
        }
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' &&
            frequency[str[i] - 'a'] > 1) {
            firstRepeating = str[i];
            break;
        }
    }

    if (firstRepeating != '\0') {
        printf("First repeating lowercase alphabet: %c\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
