/*
 * 100 Days of Code - UPES
 * Day 29 | Date: 11-Sep-2026
 *
 * Q58: Find the maximum and minimum element in an array.
 *
 * Sample Test Cases:
 * Input 1:
 * 5
 * 2 9 1 4 7
 * Output 1:
 * Max=9, Min=1
 * Input 2:
 * 3
 * 10 10 10
 * Output 2:
 * Max=10, Min=10
 */


#include <stdio.h>

/*
Q58 (Arrays (1D))

Find the maximum and minimum element in an array.
*/

int main()
{
    int a[100], n, i, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
