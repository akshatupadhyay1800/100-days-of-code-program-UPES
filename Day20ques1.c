/*
 * 100 Days of Code - UPES
 * Day 20 | Date: 29-Aug-2026
 *
 * Q39: Write a program to find the product of odd digits of a number.
 *
 * Sample Test Cases:
 * Input 1:
 * 12345
 * Output 1:
 * 15 (1*3*5)
 * Input 2:
 * 2468
 * Output 2:
 * 1 (no odd digits, assume 1)
 */


#include<stdio.h>
int main(){
    int n, digit, product=1;

    printf("enter a n");
    scanf("%d",&n);

    while(n>0){
        digit=n % 10;

        if(digit % 2!=0){
            product *= digit; 
           
        }
        n /=10;
    }
     printf("no odd digits ");
    printf("(assume product of odd digits):%d\n",product);
    return 0;
}
