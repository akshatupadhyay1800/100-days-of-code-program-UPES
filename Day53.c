/*
 * 100 Days of Code - UPES
 * Day 53 | Date: 05-Oct-2026
 *
 * Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
 *
 * Sample Test Cases:
 * Input 1:
 * nums = [1,7,3,6,5,6]
 * Output 1:
 * 3
 * Explanation 1:
 * The pivot index is 3. Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6 = 11.
 * Input 2:
 * nums = [1,2,3]
 * Output 2:
 * -1
 * Explanation 2:
 * There is no index that satisfies the conditions in the problem statement.
 * Input 3:
 * nums = [2,1,-1]
 * Output 3:
 * 0
 * Explanation 3:
 * The pivot index is 0. Left sum = 0 (no elements to the left), Right sum = 1 + (-1) = 0.
 */


#include <stdio.h>

int findPivotIndex(int arr[], int size) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    // Traverse the array to find the pivot index
    for (int i = 0; i < size; i++) {
        // Right sum is totalSum - leftSum - current element
        if (leftSum == (totalSum - leftSum - arr[i])) {
            return i; 
        }
        leftSum += arr[i];
    }

    // Return -1 if no pivot index exists
    return -1;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, n);

    printf("Pivot Index: %d\n", pivotIndex);

    return 0;
}
