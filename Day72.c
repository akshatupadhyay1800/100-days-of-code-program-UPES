/*
 * 100 Days of Code - UPES
 * Day 72 | Date: 24-Oct-2026
 *
 * Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
 *
 * Sample Test Cases:
 * Input 1:
 * File: info.txt (Content: Name: Rahul\nAge: 23)
 * Output 1:
 * Name: Rahul
 * Age: 23
 * Explanation 1:
 * The program reads each line from info.txt using fgets() and prints it until EOF.
 */


#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open info.txt\n");
        return 1;
    }
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}