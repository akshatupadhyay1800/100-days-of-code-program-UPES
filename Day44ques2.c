/*
 * 100 Days of Code - UPES
 * Day 44 | Date: 26-Sep-2026
 *
 * Q88: Replace spaces with hyphens in a string.
 *
 * Sample Test Cases:
 * Input 1:
 * hello world
 * Output 1:
 * hello-world
 */


#include <stdio.h>

int main() {
    char str[100];
    int i;
    

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
