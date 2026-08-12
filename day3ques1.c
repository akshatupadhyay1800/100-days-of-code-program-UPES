/*
 * 100 Days of Code - UPES
 * Day 03 | Date: 12-Aug-2026
 *
 * Q5: Write a program to convert temperature from Celsius to Fahrenheit.
 *
 * Sample Test Cases:
 * Input 1:
 * 0
 * Output 1:
 * Fahrenheit=32
 * Input 2:
 * 100
 * Output 2:
 * Fahrenheit=212
 */


#include<stdio.h>
int main(){
    float celsius;
    printf("enter celsius in degree");
    scanf("%f",&celsius);
    printf("Temperature in fahrenheit is %f",(celsius*1.8)+32);
    return 0;

}