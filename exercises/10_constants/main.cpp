//
// Created by gborr on 26/06/2025.
//
#include "constants.h"
#include <iostream>

/*
 * Go to the README for this one...
 */

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
