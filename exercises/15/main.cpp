//
// Created by gborr on 26/06/2025.
//
#include "Random.h"
#include <iostream>

/*
 * Simulate a game of Hi-Lo
 */

int get_integer() {
    int integer {};

    while (true) {
        std::cin >> integer; //Getting the input from the user

        if (std::cin) { //If the input is valid, clean anything the user could have added to the input.
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return integer;
        }
        else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input, please try again: " << "\n";
        }
    }
}

int get_unknown_value(int min_value, int max_value) {
    const int unknown_value {Random::get(min_value, max_value)};
    return unknown_value;
}

int get_guessed_value(int min_value, int max_value) {
    while (true) {
        const int guessed_value {get_integer()};
        if (guessed_value < min_value) {
            std::cout << "The guessed number must be greater than the minimum value, please try again: " << "\n";
            continue;
        }
        else if (guessed_value > max_value) {
            std::cout << "The guessed number must be lower than the maximum value, please try again: " << "\n";
            continue;
        }
        else {
            return guessed_value;
        }
    }
}

void logic(const int unknown_value, const int min_value, const int max_value) {
    std::cout << "How many tries do you want?";
    const int num_tries {get_integer()};

    for (int trying {1} ; trying <= num_tries; ++trying) {
        std::cout << "Guess #" << trying << "\n";
        const int guessed_value {get_guessed_value(min_value, max_value)};
        if (guessed_value < unknown_value) {
            std::cout << "Too Low..." << "\n";
        }
        else if (guessed_value > unknown_value) {
            std::cout << "Too High..." << "\n";
        }
        else {
            std::cout << "Congratulations, you have guessed the correct number!!" << "\n";
            return;
        }
    }
    std::cout << "You have run out of tries, you lose..." << "\n";
}

bool replay() {
    std::cout << "Do you want to play again? (y/n)" << "\n";
    while (true) {
        char replay {};
        std::cin >> replay;

        switch (replay) {
            case 'y':
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                return true;
            case 'n':
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                return false;
            default:
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "You have entered an invalid response, try again: " << "\n";
                continue;
        }
    }
}

void play() {
    while (true) {
        std::cout << "What is the lower threshold of the unknown value?";
        const int minimum_value {get_integer()};
        std::cout << "What is the upper threshold of the unknown value?";
        const int maximum_value {get_integer()};

        const int unknown_value (get_unknown_value(minimum_value, maximum_value));
        logic(unknown_value, minimum_value, maximum_value);
        if (!replay()) {
            return;
        }
    }
}

int main() {
    play();

    return 0;
}