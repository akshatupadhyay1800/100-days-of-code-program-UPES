/*
 * 100 Days of Code - UPES
 * Day 75 | Date: 27-Oct-2026
 *
 * Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
 *
 * Sample Test Cases:
 * Input 1:
 * Existing File: data.txt (Content before execution: Hello world)
 * User Input: This is appended text.
 * Output 1:
 * File updated successfully with appended text.
 * Explanation 1:
 * Output File (data.txt after execution): Hello world\nThis is appended text.
 */


#include <stdio.h>

int main() {
    char filename[100];
    char text[500];
    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 0;
    getchar(); // Consume newline

    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) return 0;

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}