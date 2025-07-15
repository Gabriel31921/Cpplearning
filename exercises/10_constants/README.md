**Problem:**

Write a file named constants.h that makes the following program run. 
If your compiler is C++17 capable, use an inline constexpr variable. 
Otherwise, use a normal constexpr variable. maxClassSize should have value 35.

main.cpp:

```c++
#include "constants.h"
#include <iostream>

int main()
{
	std::cout << "How many students are in your class? ";
	int students{};
	std::cin >> students;


	if (students > Constants::maxClassSize)
		std::cout << "There are too many students in this class";
	else
		std::cout << "This class isn't too large";

	return 0;
}
```

**Solution:**

Clearly, `maxClassSize` is inside the namespace `Constants`,
so that is the structure of our header. The value is set, 
so it is known at compile time, so the variable can be `constexpr`.
And we are asked for it to be `inline`, 
so it can have multiple definitions across different translation units.
Basically, the same definition (name) can be used in other files with a different value.