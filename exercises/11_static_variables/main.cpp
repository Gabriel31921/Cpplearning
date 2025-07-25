//
// Created by gborr on 26/06/2025.
//
#include <iostream>

/*
 * Go to the README for this one...
 */

int accumulate(int a) {
    static int sum {};
    sum += a;
    return sum;
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}