**Problem:**

Do not use `std::bitset` in this quiz. We’re only using `std::bitset` for printing.

Given the following program:

```c++
#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    // Place all lines of code for the following quiz here

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}
```

1. Add a line of code to set the article as viewed.
2. Add a line of code to check if the article was deleted.
3. Add a line of code to clear the article as a favorite.

**Solution:**

We start with the `option_favorite` flag set, corresponding to bit position 2 turned on, 
then we have to set bit position 0, this is `option_viewed`. This would result in `0000'0101`.
Then we test if bit position 4 is set, and at last, clear the bit position 2, to end with `0000'0001`.