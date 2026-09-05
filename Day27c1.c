/*
 * 100 Days of Code - UPES
 * Day 27 | Date: 05-Sep-2026
 *
 * Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
 *
 * Sample Test Cases:
 * Input 1:
 * 
 * Output 1:
 * *
 * ***
 * *****
 * *******
 * *********
 * *******
 * *****
 * ***
 * *
 */


#include <stdio.h>

/*
Q53 (Nested Loops without Arrays/Strings)

Write a program to print the following pattern:

*
***
*****
*******
*********
*******
*****
***
*
*/

int main()
{
    int i, j;

    // Upper half
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
