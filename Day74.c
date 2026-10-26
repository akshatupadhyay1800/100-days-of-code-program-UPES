/*
 * 100 Days of Code - UPES
 * Day 74 | Date: 26-Oct-2026
 *
 * Q124: Take two filenames from the user â€“ a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
 *
 * Sample Test Cases:
 * Input 1:
 * Source File: source.txt (Content: Learning C File Handling)
 * Output 1:
 * File copied successfully to destination.txt
 * Explanation 1:
 * Expected File (destination.txt): Learning C File Handling
 */


#include <stdio.h>

int main() {
    char src[100], dest_file[100];
    printf("Enter source filename: ");
    if (scanf("%s", src) != 1) return 0;
    printf("Enter destination filename: ");
    if (scanf("%s", dest_file) != 1) return 0;

    FILE *f_src = fopen(src, "r");
    if (f_src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }
    FILE *f_dest = fopen(dest_file, "w");
    if (f_dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(f_src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(f_src)) != EOF) {
        fputc(ch, f_dest);
    }
    fclose(f_src);
    fclose(f_dest);

    printf("File copied successfully to %s\n", dest_file);
    return 0;
}