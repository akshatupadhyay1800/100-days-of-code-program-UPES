/*
 * 100 Days of Code - UPES
 * Day 30 | Date: 12-Sep-2026
 *
 * Q59: Count even and odd numbers in an array.
 *
 * Sample Test Cases:
 * Input 1:
 * 6
 * 1 2 3 4 5 6
 * Output 1:
 * Even=3, Odd=3
 * Input 2:
 * 4
 * 2 4 6 8
 * Output 2:
 * Even=4, Odd=0
 */


#include <stdio.h>

/*
Q59 (Arrays 1D)

Count even and odd numbers in an array.
*/

int main()
{
    int a[100], n, i;
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
