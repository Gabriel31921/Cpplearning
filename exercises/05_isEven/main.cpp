//
// Created by gborr on 26/06/2025.
//
#include <iostream>

/*
 * Write a program that asks the user to input an integer, and tells the user whether the number is even or odd.
 * Write a constexpr function called isEven() that returns true if an integer passed to it is even, and false otherwise.
 */

int get_integer() {
    std::cout << "Enter an integer:";
    int number{};
    std::cin >> number;

    return number;
}

constexpr bool isEven(int x) {
    return (x % 2) == 0;
}

int main() {
    int number{};
    number = get_integer();
    if (isEven(number)) {
        std::cout << number << " is even\n";
    }
    else {
        std::cout << number << " is odd\n";
    }

    return 0;
}