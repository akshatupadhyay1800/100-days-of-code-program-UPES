/*
 * 100 Days of Code - UPES
 * Day 27 | Date: 05-Sep-2026
 *
 * Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

 *
 * Sample Test Cases:
 * Input 1:
 * 
 * Output 1:
 * Pattern with layers of stars as shown.
 */


#include <stdio.h>

/*
Q54 (Nested Loops without Arrays/Strings)

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
        // Print spaces
        for(j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for(i = 4; i >= 1; i--)
    {
        // Print spaces
        for(j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
