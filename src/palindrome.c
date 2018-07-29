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

int checkIfPalindrome(const char* string) {
    
    int i;
    int indexLeft = 0;
    int indexRight = strlen(string)-1;

    char *tempString = strdup(string);
    
    for (i = 0; i < strlen(tempString); ++i)
        tempString[i] = tolower(tempString[i]);
    
    while ((indexLeft <= indexRight)) {

        // if character at current index is not valid, move index
        while (!isalnum(tempString[indexLeft]) && indexLeft < strlen(tempString)-1) 
            ++indexLeft;        
        while (!isalnum(tempString[indexRight]) && indexRight > 0)
            --indexRight;

        if (tempString[indexLeft] != tempString[indexRight])
            return 0;

        ++indexLeft;
        --indexRight;

    }
        
    return 1;
    
}
