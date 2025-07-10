**Problem:**

We are asked to finish the following C++ program:

```cpp
#include <iostream>

// Write the function getQuantityPhrase() here

// Write the function getApplesPluralized() here

int main()
{
    constexpr int maryApples { 3 };

    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' '
              << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";

    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' '
              << getApplesPluralized(numApples) << ".\n";

    return 0;
}
```

It should print:

Mary has a few apples. -- 
How many apples do you have? 1 --
You have a single apple.

- The function `getQuantityPhrase(int)` must return a descriptor string based on the input value.
- The function `getApplesPluralized(int)` must return `"apple"` or `"apples"` based on the input.
- The conditional operator must be used in `getApplesPluralized()`.

| Quantity        | Return Value       |
|-----------------|--------------------|
| `quantity < 0`  | `"negative"`       |
| `quantity == 0` | `"no"`             |
| `quantity == 1` | `"a single"`       |
| `quantity == 2` | `"a couple of"`    |
| `quantity == 3` | `"a few"`          |
| `quantity > 3`  | `"many"`           |

**Solution:**

We have to create two functions, one that handles different cases for a single parameter,
and other that has two singular cases. 

For the first function, as it has to print singular statements based on a parameter, we just have to write 6 if-else.
For the second, as we are required to use the conditional operator, we check if `maryApples` equals 1, and then choose.

As for things to take into account, you can't make the functions void because those don't work inside a `std::cout`, 
so you have to make the functions return text, how? With `std::string_view`, then make sure all path are covered,
and that the operator precedence doesn't mess up the logic.