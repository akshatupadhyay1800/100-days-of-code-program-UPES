/*
 * 100 Days of Code - UPES
 * Day 21 | Date: 30-Aug-2026
 *
 * Q41: Write a program to swap the first and last digit of a number.
 *
 * Sample Test Cases:
 * Input 1:
 * 1234
 * Output 1:
 * 4231
 * Input 2:
 * 1001
 * Output 2:
 * 1001
 */


#include<stdio.h>
int main(){
    int n,first,last,middle=0,multiplier=1;
    printf("enter n");
    scanf("%d",&n);
    last=n % 10;
    n = n/10;

    while(n>=10){
        middle = middle +(n%10)*multiplier;
        multiplier = multiplier *10;
        n=n/10;
    }
    first=n;

    int swapped = (last * multiplier * 10) + (middle * 10) + first;

    printf("Number after swapping: %d\n", swapped);

return 0;

}
