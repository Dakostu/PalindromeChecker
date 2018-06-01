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

int main(int argc, char** argv) {
    
    if (argc == 1) {
		puts("Need a string");
		return 1;
	}
	
	printf("[%s] ",argv[1]);
    if (checkIfPalindrome(argv[1]))
        puts("True");
    else
        puts("False");
    
	return 0;
    
}
