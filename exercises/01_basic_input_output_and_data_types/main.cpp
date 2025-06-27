//
// Created by gborr on 26/06/2025.
//
#include <iostream>

/*
 * Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
 * The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
 * The program computes the answer on the two numbers the user entered and prints the results.
 * If the user enters an invalid symbol, the program should print nothing.
 */

double obtain_number(){

    std::cout << "Enter a double value: " << "\n";
    double x{};
    std::cin >> x;

    return x;
}

char obtain_operator(){

    std::cout << "Enter a chart operator; +, -, * or /: " << "\n";
    char x{};
    std::cin >> x;

    return x;
}

void check_operator(double x, double y,char op){
    if(op == '+')
        std::cout << x << op << y << " is " << x+y << "\n";
    else if(op == '-')
        std::cout << x << op << y << " is " << x-y << "\n";
    else if(op == '*')
        std::cout << x << op << y << " is " << x*y << "\n";
    else if(op == '/')
        std::cout << x << op << y << " is " << x/y << "\n";
}

int main() {
    double x{obtain_number()};
    double y{obtain_number()};
    char op{obtain_operator()};
    check_operator(x, y, op);

    return 0;
}