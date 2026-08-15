/*
 * 100 Days of Code - UPES
 * Day 06 | Date: 15-Aug-2026
 *
 * Q11: Write a program to input an integer and check whether it is even or odd using ifâ€“else.
 *
 * Sample Test Cases:
 * Input 1:
 * 7
 * Output 1:
 * 7 is odd
 * Input 2:
 * 12
 * Output 2:
 * 12 is even
 */


#include<stdio.h>
int main(){
int n;
printf("enter n");
scanf("%d",&n);
if(n%2==0){
    printf("n is even number");
}
else{
    printf("n is odd number");
}
return 0;
}
