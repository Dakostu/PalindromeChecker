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
#include <stdio.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m\n"

int main(int argc, char** argv) {
    
    if (argc == 1) {
        puts("Need a string");
        return 1;
    }
    
    if (checkIfPalindrome(argv[1])) {
        printf(GREEN"[%s] ",argv[1]);
        puts("True");
    } else {
        printf(RED"[%s] ",argv[1]);
        puts("False");
    }
    
    printf(RESET);
    return 0;
    
}
