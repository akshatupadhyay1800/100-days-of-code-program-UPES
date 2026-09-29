/*
 * 100 Days of Code - UPES
 * Day 47 | Date: 29-Sep-2026
 *
 * Q93: Check if two strings are anagrams of each other.
 *
 * Sample Test Cases:
 * Input 1:
 * listen
 * silent
 * Output 1:
 * Anagrams
 * Input 2:
 * hello
 * world
 * Output 2:
 * Not anagrams
 */


#include <stdio.h>
#include <string.h>

int main(void) {
    char first[100], second[100];
    int frequency[256] = {0};

    printf("Enter the first string: ");
    fgets(first, sizeof(first), stdin);

    printf("Enter the second string: ");
    fgets(second, sizeof(second), stdin);

    first[strcspn(first, "\n")] = '\0';
    second[strcspn(second, "\n")] = '\0';

    for (int i = 0; first[i] != '\0'; i++)
        frequency[(unsigned char)first[i]]++;

    for (int i = 0; second[i] != '\0'; i++)
        frequency[(unsigned char)second[i]]--;

    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}
