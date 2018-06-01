/*
 * PalindromeChecker
 * 
 * palindrome.c - inplementations of palindrome checking functions
 * 
 * Daniel Kostuj, 2018
 * 
 * Refer to LICENSE file for further usage of this source code.
 * 
 */

#include "palindrome.h"
#include <ctype.h>
#include <string.h>

static int checkIfOutsideAlphabet(char c) {
    return ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'));
}

int checkIfPalindrome(char* string) {
    
    int i;
    int isPalindrome = 1;
    int indexLeft = 0;
    int indexRight = strlen(string)-1;

    char *tempString = strdup(string);
    
    for (i = 0; i < strlen(tempString); ++i)
        tempString[i] = tolower(string[i]);
    
    while ((indexLeft <= indexRight) && isPalindrome) {

        // if character at current index is not valid, move index
        while (checkIfOutsideAlphabet(tempString[indexLeft]) && indexLeft < strlen(tempString)-1) 
            ++indexLeft;        
        while (checkIfOutsideAlphabet(tempString[indexRight]) && indexRight > 0)
            --indexRight;

        if (tempString[indexLeft] != tempString[indexRight])
            return 0;

        ++indexLeft;
        --indexRight;

    }
        
    return 1;
    
}
