/*
 * 100 Days of Code - UPES
 * Day 15 | Date: 24-Aug-2026
 *
 * Q29: Write a program to calculate the factorial of a number.
 *
 * Sample Test Cases:
 * Input 1:
 * 5
 * Output 1:
 * 120
 * Input 2:
 * 3
 * Output 2:
 * 6
 */


#include<stdio.h>
int main(){
    int n;
    int fact = 1;
    printf("enter n");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial is: %d\n", fact);

    return 0;
}
