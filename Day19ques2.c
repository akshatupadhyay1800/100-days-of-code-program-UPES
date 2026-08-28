/*
 * 100 Days of Code - UPES
 * Day 19 | Date: 28-Aug-2026
 *
 * Q38: Write a program to find the sum of digits of a number.
 *
 * Sample Test Cases:
 * Input 1:
 * 123
 * Output 1:
 * 6
 * Input 2:
 * 999
 * Output 2:
 * 27
 */


#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter n");
    scanf("%d",&n);
    while(n>0){
        sum +=n%10;
        n/=10;
    }
    printf("sum is %d",sum);
    return 0;
}
