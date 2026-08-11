/*
 * 100 Days of Code - UPES
 * Day 02 | Date: 11-Aug-2026
 *
 * Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 *
 * Sample Test Cases:
 * Input 1:
 * 5 10
 * Output 1:
 * Area=50, Perimeter=30
 * Input 2:
 * 3 7
 * Output 2:
 * Area=21, Perimeter=20
 */


#include<stdio.h>
int main(){
    float length,breadth;
    printf("enter length");
    scanf("%f",&length);
    printf("enter breadth");
scanf("%f",&breadth);
printf("the area of rectangle is %f\n",length*breadth);
printf("the perimeter of rectangle is %f\n",2*(length+breadth));
return 0;

}
