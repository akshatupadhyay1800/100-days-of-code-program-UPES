/*
 * 100 Days of Code - UPES
 * Day 12 | Date: 21-Aug-2026
 *
 * Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: â‚¹2/day 
Next 5 days late: â‚¹4/day 
Next 20 days days late: â‚¹6/day 
More than 30 days: Membership Cancelled.
 *
 * Sample Test Cases:
 * Input 1:
 * 4
 * Output 1:
 * Fine â‚¹8
 * Input 2:
 * 8
 * Output 2:
 * Fine â‚¹22
 * Input 3:
 * 15
 * Output 3:
 * Fine â‚¹60
 * Input 4:
 * 31
 * Output 4:
 * Membership Cancelled
 */


#include<stdio.h>
int main(){
    int days;
    int fine=0;
     
    printf("enter number of days late:");
    scanf("%d",&days);
     if(days<0){
        printf("no fine.Book returned on time.\n");
     }
     else if(days>30){
        printf("Membership Cancelled.\n ");
     }
     else{
        if(days<=5){
            fine=days*2;
        }
        else if(days<=10){
            fine =10+(days-5)*4;
        }
        else{
            fine=30+(days-10)*6;
        }
        printf("total fine:%d\n",fine);
     }
     return 0;
     }
