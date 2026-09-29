/*
 * 100 Days of Code - UPES
 * Day 47 | Date: 29-Sep-2026
 *
 * Q94: Find the longest word in a sentence.
 *
 * Sample Test Cases:
 * Input 1:
 * I love programming
 * Output 1:
 * programming
 */


#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[200];
    char *word;
    char longest[200] = "";

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    word = strtok(sentence, " ");

    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    if (longest[0] != '\0')
        printf("The longest word is: %s\n", longest);
    else
        printf("No words were entered.\n");

    return 0;
}
