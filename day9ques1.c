/*
 * 100 Days of Code - UPES
 * Day 09 | Date: 18-Aug-2026
 *
 * Q17: Write a program to find the roots of a quadratic equation and categorize them.
 *
 * Sample Test Cases:
 * Input 1:
 * 1 -3 2
 * Output 1:
 * Roots are real and different: 2, 1
 * Input 2:
 * 1 -2 1
 * Output 2:
 * Roots are real and same: 1
 * Input 3:
 * 1 2 5
 * Output 3:
 * Roots are complex
 */


#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;

    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    d = (b * b) - (4 * a * c);

    if (d >= 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 is %f\n", root1);
        printf("root2 is %f\n", root2);
    } else {
        printf("roots are imaginary\n");
    }

    return 0;
}
