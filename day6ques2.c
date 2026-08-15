/*
 * 100 Days of Code - UPES
 * Day 06 | Date: 15-Aug-2026
 *
 * Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested ifâ€“else.
 *
 * Sample Test Cases:
 * Input 1:
 * -5
 * Output 1:
 * Negative
 * Input 2:
 * 0
 * Output 2:
 * Zero
 * Input 3:
 * 10
 * Output 3:
 * Positive
 */


#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
if(n>0){ 
    printf("n is positive number");
}
 else{
    if(n<0){
      printf("n is negative number");  
    }
    else{
            printf("n is zero number");
        }
    }
 
 return 0;

}

