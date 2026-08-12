/*
 * 100 Days of Code - UPES
 * Day 03 | Date: 12-Aug-2026
 *
 * Q6: Write a program to swap two numbers using a third variable.
 *
 * Sample Test Cases:
 * Input 1:
 * 3 5
 * Output 1:
 * After swap: 5 3
 * Input 2:
 * -1 1
 * Output 2:
 * After swap: 1 -1
 */


#include<stdio.h>
int main(){
    float a,b,temp;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);

    return 0;
}
