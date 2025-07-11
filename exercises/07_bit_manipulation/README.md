**Problem:**

Implement a function that does a left rotation on a `std::bitset<4>`.
Do it here:

```c++

#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
// Your code here
}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}

```

**Solution:**

Given a 4-bit value, for rotating it we have to know the value in the index 3,
or the most significant bit. If said value is 0, then just do a left shift, and if it's one,
then do a left shift and flip the value in index 0, turning it on.