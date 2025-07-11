//
// Created by gborr on 26/06/2025.
//
#include <bitset>
#include <cstdint>
#include <iostream>

/*
 * Go to the README for this one...
 */

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    // Place all lines of code for the following quiz here
    myArticleFlags |= option_viewed;
    /*
     * This bitwise operator OR "|" sees that there is a 1 in bit position 0 in option_viewed, this is, it's set.
     * Then, it sets the same position in myArticleFlags if it was not set before, if it was set, it was, it does nothing.
     */
    std::cout << "Was the article deleted?" << ((myArticleFlags & option_deleted)? " True" : " False") << std::endl;
    /*
     * The AND operator checks if the bit position 4 is set in both myArticleFlags and option_deleted at the same time,
     * if it is, returns true, if not, false.
     */
    myArticleFlags &= ~option_favorited;
    /*
    * This line clears the "favorited" flag (bit position 2) in myArticleFlags.
    * ~option_favorited inverts all bits, turning bit 2 to 0 and all others to 1.
    * The bitwise AND "&" then clears only bit 2, preserving the rest.
    * This operation ensures the article is no longer marked as favorited.
    */

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}