**Problem:**

Write a function `int accumulate(int x)`. 
This function should return the sum of all of the values of `x` that have been passed to this function.

The following program should run and produce the output noted in comments:

```c++
#include <iostream>

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}
```

**Solution:**

The function we have to write has to keep in mind the last value, 
and sum a new one to it. The new value will be the parameter of the function,
while the value it has to keep will be a `static` variable, since it keeps
its value in memory.