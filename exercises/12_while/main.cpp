//
// Created by gborr on 26/06/2025.
//
#include <iostream>

/*
 * Write a program that simulates a ball falling of a tower. The program should output the ball height every second.
 */
namespace constants {
    constexpr double gravity {9.8};
}

int get_tower_height() {
    std::cout << "How many meters high is the tower the ball is going to fall from?" << "\n";
    int tower_height {};
    std::cin >> tower_height;

    return tower_height;
}

double ball_height(int tower_height, int time) {
    double distance_traveled {};
    distance_traveled = ((time * time) * constants::gravity / 2.0);
    double ball_height {};
    ball_height = (tower_height - distance_traveled);
    return ball_height;
}

int main() {
    const int tower_height = get_tower_height();
    for (int time{}; ball_height(tower_height, time) > 0; ++time) {
        std::cout << "At second " << time << " the ball is at " <<
            ball_height(tower_height, time) << " meters." << "\n";
    }
    std::cout << "The ball has reached the ground!" << "\n";

    return 0;
}