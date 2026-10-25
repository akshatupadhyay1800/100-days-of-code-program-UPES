/*
 * 100 Days of Code - UPES
 * Day 73 | Date: 25-Oct-2026
 *
 * Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
 *
 * Sample Test Cases:
 * Input 1:
 * File: sample.txt (Content: Hello world\nThis is C programming)
 * Output 1:
 * Characters: 31
 * Words: 5
 * Lines: 2
 * Explanation 1:
 * The file has 31 characters including spaces and newlines, 5 words, and 2 lines.
 */


#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter file name: ");
    if (scanf("%s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    int in_word = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) {
            in_word = 0;
        } else {
            if (!in_word) {
                words++;
                in_word = 1;
            }
        }
    }
    if (chars > 0 && lines == 0) lines = 1;
    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}