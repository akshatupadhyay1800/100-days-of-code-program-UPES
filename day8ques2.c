/*
 * 100 Days of Code - UPES
 * Day 08 | Date: 17-Aug-2026
 *
 * Q16: Write a program to input three numbers and find the largest among them using ifâ€“else.
 *
 * Sample Test Cases:
 * Input 1:
 * 3 7 5
 * Output 1:
 * Largest is 7
 * Input 2:
 * -1 -5 0
 * Output 2:
 * Largest is 0
 */


#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a\n"); 
    printf("enter b\n");
    printf("enter c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c){
        printf("Largest is %d",a);
    }
    if(b>a && b>c){
        printf("Largest is %d",b);
    }
    else{
        printf("Largest is %d",c);
    }
    return 0;
}