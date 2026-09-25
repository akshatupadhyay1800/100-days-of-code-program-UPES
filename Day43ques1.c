/*
 * 100 Days of Code - UPES
 * Day 43 | Date: 25-Sep-2026
 *
 * Q85: Reverse a string.
 *
 * Sample Test Cases:
 * Input 1:
 * abcd
 * Output 1:
 * dcba
 */


#include <stdio.h>
#include <string.h>

int main() {
	char str[100];

	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';

	int length = strlen(str);
	for (int i = 0; i < length / 2; i++) {
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}

	printf("%s\n", str);

	return 0;
}
