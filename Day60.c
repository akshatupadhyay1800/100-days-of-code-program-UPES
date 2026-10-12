/*
 * 100 Days of Code - UPES
 * Day 60 | Date: 12-Oct-2026
 *
 * Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
 *
 * Sample Test Cases:
 * Input 1:
 * arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
 * Output 1:
 * 3 3 4 5 5 5 6
 * Explanation 1:
 * 1st contiguous subarray , max = 3; 2nd contiguous subarray , max = 3; 3rd contiguous subarray , max = 4; 4th contiguous subarray , max = 5; 5th contiguous subarray , max = 5; 6th contiguous subarray , max = 5; 7th contiguous subarray , max = 6.
 * Input 2:
 * arr[5, 1, 3, 4, 2] = , k = 1
 * Output 2:
 * 5 1 3 4 2
 * Explanation 2:
 * When k = 1, each element in the array is its own subarray, so the output is simply the same array.
 */


#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) return 0;

    for (int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }
        printf("%d", max_val);
        if (i < n - k) printf(" ");
    }
    printf("\n");
    return 0;
}