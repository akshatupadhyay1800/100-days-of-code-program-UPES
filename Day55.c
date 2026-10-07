/*
 * 100 Days of Code - UPES
 * Day 55 | Date: 07-Oct-2026
 *
 * Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than âŒŠn / 2âŒ‹ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
 *
 * Sample Test Cases:
 * Input 1:
 * nums = [3,2,3]
 * Output 1:
 * 3
 * Explanation 1:
 * Size = 3, Count of 3 = 2 â†’ 2 > 3/2. Thus, 3 is the majority element.
 * Input 2:
 * nums = [2,2,1,1,1,2,2]
 * Output 2:
 * 2
 * Explanation 2:
 * Size = 7, Count of 2 = 4 â†’ 4 > 7/2. Thus, 2 is the majority element.
 * Input 3:
 * nums = [2,2,1,1,1,2,2,3]
 * Output 3:
 * -1
 * Explanation 3:
 * Size = 8, Count of 2 = 4 â†’ 4 is not strictly greater than 8/2. Hence, no majority element exists.
 */


#include <stdio.h>
int findMajorityElement(int nums[], int n) {
    int candidate = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int actualCount = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            actualCount++;
        }
    }

    if (actualCount > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findMajorityElement(nums, n);
    printf("Majority element: %d\n", result);

    return 0;
}
