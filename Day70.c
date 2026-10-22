/*
 * 100 Days of Code - UPES
 * Day 70 | Date: 22-Oct-2026
 *
 * Q120: Write a program to take a string input. Change it to sentence case.
 *
 * Sample Test Cases:
 * Input 1:
 * str = I am trying to build logic.
 * Output 1:
 * I Am Trying To Build Logic
 * Input 2:
 * str = The classes are supposed to start early.
 * Output 2:
 * The Classes Are Supposed To Start Early.
 * Input 3:
 * str = We are going to look at 26 different test cases.
 * Output 3:
 * We Are Going To Look At 26 Different Test Cases.
 */


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    int in_word = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            if (!in_word) {
                str[i] = toupper((unsigned char)str[i]);
                in_word = 1;
            } else {
                str[i] = tolower((unsigned char)str[i]);
            }
        } else {
            in_word = 0;
        }
    }
    printf("%s", str);
    return 0;
}