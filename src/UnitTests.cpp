#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "palindrome.h"

#include <vector>

TEST_CASE( "Check palindromes", "[PalindromeCheck]" ) {
    
    std::vector<const char*> palindromes = {
        "ROTAVATOR",
        "Ed, I saw Harpo Marx ram Oprah W. aside.",
        "Murder for a jar of red rum.",
        "UFO tofu?",
        "Are we not pure? “No, sir!” Panama’s moody Noriega brags. “It is garbage!” Irony dooms a man—a prisoner up to new era.",
        "Dennis, Nell, Edna, Leon, Nedra, Anita, Rolf, Nora, Alice, Carol, Leo, Jane, Reed, Dena, Dale, Basil, Rae, Penny, Lana, Dave, Denny, Lena, Ida, Bernadette, Ben, Ray, Lila, Nina, Jo, Ira, Mara, Sara, Mario, Jan, Ina, Lily, Arne, Bette, Dan, Reba, Diane, Lynn, Ed, Eva, Dana, Lynne, Pearl, Isabel, Ada, Ned, Dee, Rena, Joel, Lora, Cecil, Aaron, Flora, Tina, Arden, Noel, and Ellen sinned."
    };
    
    
    for (auto palindrome : palindromes) {
        REQUIRE(checkIfPalindrome(palindrome) == 1);
    }
    
}

