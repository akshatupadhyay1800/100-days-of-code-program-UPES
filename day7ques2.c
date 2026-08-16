/*
 * 100 Days of Code - UPES
 * Day 07 | Date: 16-Aug-2026
 *
 * Q14: Write a program to input a character and check whether it is a vowel or consonant using ifâ€“else.
 *
 * Sample Test Cases:
 * Input 1:
 * a
 * Output 1:
 * Vowel
 * Input 2:
 * b
 * Output 2:
 * Consonant
 */


#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("ener any character");
    scanf("%c",&ch);
    if(isalpha(ch)){
        if (ch == 'a' || ch == 'A' || 
            ch == 'e' || ch == 'E' || 
            ch == 'i' || ch == 'I' || 
            ch == 'o' || ch == 'O' || 
            ch == 'u' || ch == 'U') {
            printf("'%c' is a VOWEL.\n", ch);
        } 
        else {
            printf("'%c' is a CONSONANT.\n", ch);
        }
    }
    else{
        printf("error:'%c'is not an alphabetical letter.\n",ch);
    }
    return 0;
}