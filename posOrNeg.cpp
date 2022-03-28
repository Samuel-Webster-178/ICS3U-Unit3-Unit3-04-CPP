// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on March 2022
// Tells user if an integer is positive, negative, or zero

#include <iostream>

int main() {
    // I calculate circumference of a circle
    int number;

    // input
    std::cout << "Input an integer: ";
    std::cin >> number;

    // process & output
    if (number > 0) {
        std::cout << number;
        std::cout << " is positive" << std::endl;
    } else if (number < 0) {
        std::cout << number;
        std::cout << " is negative" << std::endl;
    } else {
        std::cout << "0 is just zero" << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done.";
}
