/*
 * PalindromeChecker
 * 
 * main.c - main function for PalindromeChecker
 * 
 * Daniel Kostuj, 2018
 * 
 * Refer to LICENSE file for further usage of this source code.
 * 
 */

#include "palindrome.h"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m\n"

int main(int argc, char** argv) {
    
    if (argc == 1) {
        puts("Need a string");
        return 1;
    }

    char englishString[strlen(argv[1])];
    strcpy(englishString, argv[1]);
    
    int i;
    for (i = 0; i < strlen(englishString); ++i) {
        if (!isalnum(englishString[i]))
            englishString[i] = ' ';
    }
    
    
    if (checkIfPalindrome(englishString)) {
        printf(GREEN"[%s] ", englishString);
        puts("True");
    } else {
        printf(RED"[%s] ", englishString);
        puts("False");
    }
    
    printf(RESET);
    return 0;
    
}
