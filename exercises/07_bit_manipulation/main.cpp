//
// Created by gborr on 26/06/2025.
//
#include <bitset>
#include <iostream>

/*
 * Go to the README for this one...
 */

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits) {
    const bool value {bits.test(3)};     //Test if the value in the MSB is true or false.
    if (value) {                                //If true, do a left shift and turn on the LSB
        bits <<= 1;
        bits.set(0);
    }
    else {                                      //If false, just do a left shift
        bits <<= 1;
    }

    return bits;
}

int main()
{
    std::bitset<4> bits1{ 0b0001 };
    std::cout << rotl(bits1) << '\n';

    std::bitset<4> bits2{ 0b1001 };
    std::cout << rotl(bits2) << '\n';

    return 0;
}
