/*
 * 100 Days of Code - UPES
 * Day 14 | Date: 23-Aug-2026
 *
 * Q28: Write a program to print the product of even numbers from 1 to n.
 *
 * Sample Test Cases:
 * Input 1:
 * 4
 * Output 1:
 * 8 (2 * 4)
 * Input 2:
 * 6
 * Output 2:
 * 48 (2 * 4 * 6)
 */


#include <stdio.h>

int main()
{
    int n;
    long a=1;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i = 2;i<=n;i+=2){
        a *= i;
    }
    if(n<2){
        printf("There are no even numbers between 1 and 2.\n");
    }
    else if(n>2){
        printf("The product of even numbers from 1 to %d = %ld.\n",n,a);
    }
    return 0;
}
