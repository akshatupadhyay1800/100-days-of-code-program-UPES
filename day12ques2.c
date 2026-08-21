/*
 * 100 Days of Code - UPES
 * Day 12 | Date: 21-Aug-2026
 *
 * Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at â‚¹5/unit 
Next 100 units at â‚¹7/unit 
Next 100 units at â‚¹10/unit 
Above at â‚¹12/unit
 *
 * Sample Test Cases:
 * Input 1:
 * 50
 * Output 1:
 * Bill: â‚¹250
 * Input 2:
 * 150
 * Output 2:
 * Bill: â‚¹850
 * Input 3:
 * 250
 * Output 3:
 * Bill: â‚¹1700
 */


#include <stdio.h>

int main() {
    int units, bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units > 0) {
        if (units <= 100) {
            bill += units * 5;
        } else {
            bill += 100 * 5;
        }
    }

    if (units > 100) {
        if (units <= 200) {
            bill += (units - 100) * 7;
        } else {
            bill += 100 * 7;
        }
    }

    if (units > 200) {
        if (units <= 300) {
            bill += (units - 200) * 10;
        } else {
            bill += 100 * 10;
        }
    }

    if (units > 300) {
        bill += (units - 300) * 12;
    }

    printf("Total Bill: %d\n", bill);
    return 0;
}


    