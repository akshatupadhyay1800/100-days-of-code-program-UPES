/*
 * 100 Days of Code - UPES
 * Day 50 | Date: 02-Oct-2026
 *
 * Q100: Print all sub-strings of a string.
 *
 * Sample Test Cases:
 * Input 1:
 * abc
 * Output 1:
 * a,ab,abc,b,bc,c
 */


#include <stdio.h>
#include <string.h>

int main(void) {
	char text[1000];
	size_t start;
	size_t end;
	size_t length;

	printf("Enter a string: ");
	if (fgets(text, sizeof(text), stdin) == NULL) {
		return 1;
	}

	text[strcspn(text, "\n")] = '\0';
	length = strlen(text);

	printf("Substrings:\n");
	for (start = 0; start < length; start++) {
		for (end = start; end < length; end++) {
			printf("%.*s\n", (int)(end - start + 1), text + start);
		}
	}

	return 0;
}
