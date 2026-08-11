/*
 * 100 Days of Code - UPES
 * Day 02 | Date: 11-Aug-2026
 *
 * Q4: Write a program to calculate the area and circumference of a circle given its radius.
 *
 * Sample Test Cases:
 * Input 1:
 * 7
 * Output 1:
 * Area=153.94, Circumference=43.96
 * Input 2:
 * 3
 * Output 2:
 * Area=28.27, Circumference=18.85
 */


#include<stdio.h>
int main(){
    float radius;
    printf("enter radius");
    scanf("%f",&radius);
    printf("the area of circle is %f\n",3.14*radius*radius);
    printf("the circumference of circle is %f\n",2*3.14*radius);
    return 0;

}