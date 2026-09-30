/*
 * 100 Days of Code - UPES
 * Day 48 | Date: 30-Sep-2026
 *
 * Q95: Check if one string is a rotation of another.
 *
 * Sample Test Cases:
 * Input 1:
 * abcde
 * deabc
 * Output 1:
 * Rotation
 * Input 2:
 * abc
 * acb
 * Output 2:
 * Not rotation
 */


#include <stdio.h>
#include <string.h>

int main(void) {
	char first[100], second[100], doubled[200];

	printf("Enter the first string: ");
	fgets(first, sizeof(first), stdin);

	printf("Enter the second string: ");
	fgets(second, sizeof(second), stdin);

	first[strcspn(first, "\n")] = '\0';
	second[strcspn(second, "\n")] = '\0';

	if (strlen(first) != strlen(second)) {
		printf("The strings are not rotations of each other.\n");
		return 0;
	}

	snprintf(doubled, sizeof(doubled), "%s%s", first, first);

	if (strstr(doubled, second) != NULL)
		printf("The second string is a rotation of the first.\n");
	else
		printf("The strings are not rotations of each other.\n");

	return 0;
}
