/*
 * 100 Days of Code - UPES
 * Day 71 | Date: 23-Oct-2026
 *
 * Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the userâ€™s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
 *
 * Sample Test Cases:
 * Input 1:
 * Name: Rahul, Age: 23
 * Output 1:
 * File created successfully! Data written to info.txt
 * Explanation 1:
 * Expected File Content (info.txt): Name: Rahul Age: 23
 */


#include <stdio.h>

int main() {
    char name[100];
    int age;
    printf("Enter Name: ");
    if (scanf("%s", name) != 1) return 0;
    printf("Enter Age: ");
    if (scanf("%d", &age) != 1) return 0;

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fprintf(fp, "Name: %s Age: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}