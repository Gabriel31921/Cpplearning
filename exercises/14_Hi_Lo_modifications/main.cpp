//
// Created by gborr on 26/06/2025.
//
#include "Random.h"
#include <iostream>

/*
 * Write a program that simulates a ball falling of a tower. The program should output the ball height every second.
 */

int get_value() {
    std::cout << "Enter the minimum possible value: " << "\n";
    int min_value {};
    std::cin >> min_value;
    std::cout << "Enter the maximum possible value: " << "\n";
    int max_value {};
    std::cin >> max_value;

    const int value {Random::get(min_value, max_value)};
    return value;
}

int get_guessed_value(int try_attempt) {
    std::cout << "Guess #" << try_attempt << ": " << "\n";
    int guessed_value {};
    std::cin >> guessed_value;

    return guessed_value;
}

void guessing(int unknown_value) {
    std::cout << "How many guesses do you want to have? " << "\n";
    int number_tries {};
    std::cin >> number_tries;

    int try_attempt {1};

    while (try_attempt <= number_tries) {
        int guessed = get_guessed_value(try_attempt);
        if (guessed == unknown_value) {
            std::cout << "You win!" << "\n";
            return;
        } else if (guessed < unknown_value) {
            std::cout << "Too low!" << "\n";
        } else if (guessed > unknown_value) {
            std::cout << "Too high!" << "\n";
        }
        ++try_attempt;
    }
    std::cout << "You lost!" << "\n";
}

void play() {
    const int unknown_value {get_value()};
    guessing(unknown_value);

    bool playing { true };

    while (playing){
        std::cout << "Do you want to play again? (y/n)" << "\n";
        char answer {};
        std::cin >> answer;

        if (answer == 'n') {
            std::cout << "Thank you for playing!" << "\n";
            playing = false;
        }
        else if (answer == 'y') {
            const int new_unknown_value {get_value()};
            guessing(new_unknown_value);
        }
    }
}

int main() {
    std::cout << "Let's play a game of Hi-Lo, you get to choose the interval of the unknown number and your number of tries!" << "\n";
    play();
    return 0;
}