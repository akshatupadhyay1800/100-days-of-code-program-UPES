/*
 * 100 Days of Code - UPES
 * Day 79 | Date: 31-Oct-2026
 *
 * Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
 *
 * Sample Test Cases:
 * Input 1:
 * File: numbers.txt (Content: 10 20 30 40 50)
 * Output 1:
 * Sum = 150
 * Average = 30.00
 * Explanation 1:
 * The program reads integers from the file, computes their total sum (150), and calculates the average (30.00).
 */


#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening numbers.txt\n");
        return 1;
    }

    int num, count = 0, sum = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);

    if (count > 0) {
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", (float)sum / count);
    } else {
        printf("File is empty or contains no integers.\n");
    }
    return 0;
}