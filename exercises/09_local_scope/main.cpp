//
// Created by gborr on 26/06/2025.
//
#include <iostream>

/*
 * Write a program that asks the user to enter two integers, one named smaller, the other named larger.
 * If the user enters a smaller value for the second integer,
 * use a block and a temporary variable to swap the smaller and larger values.
 * Then print the values of the smaller and larger variables.
 * Add comments to your code indicating where each variable dies.
 * Note: When you print the values, smaller should hold the smaller input and larger the larger input,
 * no matter which order they were entered in.
 */

int main()
{
    std::cout << "Enter an integer: \n";
    int smaller {};     //smaller is created here
    std::cin >> smaller;
    std::cout << "Enter a larger integer: \n";
    int larger {};      //larger is created here
    std::cin >> larger;

    if (smaller > larger) {
        std::cout << "Swaping variables..." << "\n";
        int temp {smaller}; //temp is created here
        smaller = larger;
        larger = temp;
    }   //temp dies here

    std::cout << "The smaller value is: " << smaller << "\n";
    std::cout << "The larger value is: " << larger << "\n";

    return 0;
}   //smaller and larger die here
