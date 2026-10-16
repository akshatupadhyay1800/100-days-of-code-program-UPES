/*
 * 100 Days of Code - UPES
 * Day 64 | Date: 16-Oct-2026
 *
 * Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
 *
 * Sample Test Cases:
 * Input 1:
 * s = "abcabcbb"
 * Output 1:
 * 3
 * Explanation 1:
 * The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
 * Input 2:
 * s = "bbbbb"
 * Output 2:
 * 1
 * Explanation 2:
 * The answer is "b", with the length of 1.
 * Input 3:
 * s = "pwwkew"
 * Output 3:
 * 3
 * Explanation 3:
 * The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 */


#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter string: ");
    if (scanf("%s", s) != 1) return 0;

    int n = strlen(s);
    int max_len = 0;
    int last_index[256];
    for (int i = 0; i < 256; i++) last_index[i] = -1;

    int start = 0;
    for (int i = 0; i < n; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last_index[c] >= start) {
            start = last_index[c] + 1;
        }
        last_index[c] = i;
        int len = i - start + 1;
        if (len > max_len) {
            max_len = len;
        }
    }
    printf("%d\n", max_len);
    return 0;
}