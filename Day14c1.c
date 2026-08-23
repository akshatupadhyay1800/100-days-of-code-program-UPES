/*
 * 100 Days of Code - UPES
 * Day 14 | Date: 23-Aug-2026
 *
 * Q27: Write a program to print the sum of the first n odd numbers.
 *
 * Sample Test Cases:
 * Input 1:
 * 3
 * Output 1:
 * 9
 * Input 2:
 * 5
 * Output 2:
 * 25
 */


 #include <stdio.h>
 
 int main()
 {
    int n,a=0,i=1,b=1;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    while(i<=n){
        a = a+b;
        b = b+2;
        i++;
    }
    printf("The sum of first n odd numbers = %d.\n",a);

    return 0;
 }
