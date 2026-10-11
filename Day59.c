/*
 * 100 Days of Code - UPES
 * Day 59 | Date: 11-Oct-2026
 *
 * Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
 *
 * Sample Test Cases:
 * Input 1:
 * arr[100, 200, 300, 400] = , k = 2
 * Output 1:
 * 700
 * Explanation 1:
 * arr2 + arr3 = 700, which is maximum.
 * Input 2:
 * arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
 * Output 2:
 * 39
 * Explanation 2:
 * arr1 + arr2 + arr3 + arr4 = 39, which is maximum.
 * Input 3:
 * arr[100, 200, 300, 400] = , k = 1
 * Output 3:
 * 400
 * Explanation 3:
 * arr3 = 400, which is maximum.
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

    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    int max_sum = current_sum;
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    printf("%d\n", max_sum);
    return 0;
}