//
// Created by gborr on 26/06/2025.
//
#include <iostream>

/*
 * Write a short program to simulate a ball being dropped off of a tower.
 * To start, the user should be asked for the height of the tower in meters.
 * Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start).
 * Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds.
 * The ball should not go underneath the ground (height 0).
 *
 * Use a function to calculate the height of the ball after x seconds.
 * The function can calculate how far the ball has fallen after x seconds using the following formula:
 * distance fallen = gravity_constant * x_seconds2 / 2
 */

double meters_tower() {
    std::cout << "Enter height of the tower: ";
    double meters{};
    std::cin >> meters;
    std::cout << "\n";

    return meters;
}

double calc_fall(int second) {
    double g{9.8};
    double fall{};
    fall = g * second * second / 2;

    return fall;
}

bool check_height(double tower_height, double distance_fell) {
    if (distance_fell < tower_height) {
        return true;
    }
    return false;
}

void output(bool valid, double tower_height, int seconds, double distance) {
    if (valid) {
        std::cout << "The height of the ball after " << seconds << " second is at: "
            << tower_height - distance << " meters" << "\n";
    }
    else {
        std::cout << "By the second " << seconds << ", the ball has reached the floor." << "\n";
    }
}

int main() {
    double tower_height{meters_tower()};

    double fall{calc_fall(1)};
    bool valid{check_height(tower_height, fall)};
    output(valid, tower_height, 1, fall);

    fall = calc_fall(2);
    valid = check_height(tower_height, fall);
    output(valid, tower_height, 2, fall);

    fall = calc_fall(3);
    valid = check_height(tower_height, fall);
    output(valid, tower_height, 3, fall);

    fall = calc_fall(4);
    valid = check_height(tower_height, fall);
    output(valid, tower_height, 4, fall);

    fall = calc_fall(5);
    valid = check_height(tower_height, fall);
    output(valid, tower_height,5, fall);

    return 0;
}