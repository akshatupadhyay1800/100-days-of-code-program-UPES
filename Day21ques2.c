/*
 * 100 Days of Code - UPES
 * Day 21 | Date: 30-Aug-2026
 *
 * Q42: Write a program to check if a number is a perfect number.
 *
 * Sample Test Cases:
 * Input 1:
 * 6
 * Output 1:
 * Perfect number
 * Input 2:
 * 10
 * Output 2:
 * Not perfect number
 */


#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter n");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++){
        if(n % i ==0){
            sum +=i;
        }
    }
if((n-sum ==0)&& n > 0) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is NOT a perfect number.\n", n);
    }

    return 0;

}
