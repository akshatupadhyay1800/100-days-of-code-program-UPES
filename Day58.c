/*
 * 100 Days of Code - UPES
 * Day 58 | Date: 10-Oct-2026
 *
 * Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 *
 * Sample Test Cases:
 * Input 1:
 * nums = [1,2,3,4]
 * Output 1:
 * [24,12,8,6]
 * Input 2:
 * nums = [-1,1,0,-3,3]
 * Output 2:
 * [0,0,9,0,0]
 */


#include <stdio.h>
#include <stdlib.h>

/**
 * Calculates the product of all elements except the current one.
 * The returned array must be malloced; the caller is responsible for freeing it.
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* answer = (int*)malloc(numsSize * sizeof(int));
    if (answer == NULL) {
        *returnSize = 0;
        return NULL;
    }
    
    *returnSize = numsSize;

    // Step 1: Left-to-right pass (Prefix products)
    int leftProduct = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] = leftProduct;
        leftProduct *= nums[i];
    }

    // Step 2: Right-to-left pass (Suffix products)
    int rightProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return answer;
}

int main() {
    int numsSize;

    // Get array size from user
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &numsSize) != 1 || numsSize <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Dynamically allocate memory for the input array
    int* nums = (int*)malloc(numsSize * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed for input array.\n");
        return 1;
    }

    // Get array elements from user
    printf("Enter %d integers:\n", numsSize);
    for (int i = 0; i < numsSize; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &nums[i]) != 1) {
            printf("Invalid input.\n");
            free(nums);
            return 1;
        }
    }

    int returnSize;
    // Calculate the product array
    int* answer = productExceptSelf(nums, numsSize, &returnSize);

    if (answer != NULL) {
        // Print the output array
        printf("\nAnswer array: [");
        for (int i = 0; i < returnSize; i++) {
            printf("%d", answer[i]);
            if (i < returnSize - 1) {
                printf(", ");
            }
        }
        printf("]\n");

        // Free the result array memory
        free(answer);
    } else {
        printf("Memory allocation failed for answer array.\n");
    }

    // Free the input array memory
    free(nums);

    return 0;
}
