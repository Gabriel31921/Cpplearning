//
// Created by gborr on 26/06/2025.
//
#include <iostream>
#include <string>

int length_name() {
    std::cout <<  "Enter your full name; " << "\n";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    int length_name {static_cast<int>(std::ssize(name))};

    return length_name;
}

int get_age() {
    std::cout <<  "Enter your age; " << "\n";
    int age{};
    std::cin >> age;

    return age;
}

int main() {

    int sum {length_name() + get_age()};
    std::cout << "Your age + length of name is: " << sum << "\n";

    return 0;
}