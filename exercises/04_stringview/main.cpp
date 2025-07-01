//
// Created by gborr on 26/06/2025.
//
#include <iostream>
#include <string>
#include <string_view>

/*
 * Write a program that asks for the name and age of two people, then prints which person is older.
 */

std::string get_name(int num) {
    std::cout << "Enter the name of the person #" << num << ":";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int get_age(std::string_view name) {
    std::cout << "Enter the age of " << name << ":";
    int age{};
    std::cin >> age;

    return age;
}

void sort_persons(std::string_view name_1, std::string_view name_2, int age_1, int age_2) {
    if (age_1 < age_2) {
        std::cout << name_2 << " (age " << age_2 << ") is older than " << name_1 << " (age " << age_1 << ")" << "\n";
    }
    else if (age_2 == age_1) {
        std::cout << name_1 << " (age " << age_1 << ") has the same age as "
        << name_2 << " (age " << age_2 << ")" << "\n";
    }
    else {
        std::cout << name_1 << " (age " << age_1 << ") is older than "
        << name_2 << " (age " << age_2 << ")" << "\n";
    }
}

int main() {
    const std::string name_1 {get_name(1)};
    const int age_1 {get_age(name_1)};
    const std::string name_2 {get_name(2)};
    const int age_2 {get_age(name_2)};
    sort_persons(name_1, name_2, age_1, age_2);

    return 0;
}