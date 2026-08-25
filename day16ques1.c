/*
 * 100 Days of Code - UPES
 * Day 16 | Date: 25-Aug-2026
 *
 * Q31: Write a program to take a number as input and print its equivalent binary representation.
 *
 * Sample Test Cases:
 * Input 1:
 * 10
 * Output 1:
 * 1010
 * Input 2:
 * 7
 * Output 2:
 * 111
 */


#include <stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2); 
    }
    printf("%d", n % 2);    
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Binary Representation: ");
    
    if (number < 0) {
        printf("-");
        number = -number; 
    }

    printBinary(number);
    printf("\n");

    return 0;
}