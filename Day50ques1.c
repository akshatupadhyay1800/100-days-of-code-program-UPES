/*
 * 100 Days of Code - UPES
 * Day 50 | Date: 02-Oct-2026
 *
 * Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
 *
 * Sample Test Cases:
 * Input 1:
 * 15/04/2025
 * Output 1:
 * 15-Apr-2025
 */


#include <stdio.h>

int main(void) {
	int day;
	int month;
	int year;

	printf("Enter a date (dd/04/yyyy): ");
	if (scanf("%2d/%2d/%4d", &day, &month, &year) != 3) {
		printf("Invalid date format.\n");
		return 1;
	}

	if (month != 4 || day < 1 || day > 30 || year < 0) {
		printf("Enter a valid April date in dd/04/yyyy format.\n");
		return 1;
	}

	printf("Formatted date: %02d-Apr-%04d\n", day, year);
	return 0;
}
