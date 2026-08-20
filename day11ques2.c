/*
 * 100 Days of Code - UPES
 * Day 11 | Date: 20-Aug-2026
 *
 * Q22: Write a program to find profit or loss percentage given cost price and selling price.
 *
 * Sample Test Cases:
 * Input 1:
 * 1000 1200
 * Output 1:
 * Profit 20%
 * Input 2:
 * 1000 800
 * Output 2:
 * Loss 20%
 * Input 3:
 * 1000 1000
 * Output 3:
 * No Profit No Loss
 */


#include<stdio.h>
int main(){
    float costprice,sellingprice,profit,loss,percentage;
    printf("enter cost price");
    scanf("%f",&costprice);
    printf("enter selling price");
    scanf("%f",&sellingprice);
    if(costprice>sellingprice){
        loss=costprice-sellingprice;
        percentage=(loss/costprice)*100;
        printf("loss is %f\n",loss);
        printf("loss percentage is %f\n",percentage);

    }
    else if(sellingprice>costprice){
        profit=sellingprice-costprice;
        percentage=(profit/costprice)*100;
        printf("profit if %f",profit);
        printf("profit percentage is %f",percentage);

    }
    else{
        printf("no profit,no loss.\n");
    }
    return 0;
}
