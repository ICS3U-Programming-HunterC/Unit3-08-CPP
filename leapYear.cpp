// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: April 5, 2022
// This program asks the user to enter a year, and it will
// check if it is a leap year or not


#include <iostream>
#include <string>


int main() {
    // declare variables
    std::string userInputString;
    int userInput;
    float yearBy4, yearBy100, yearBy400;

    // Get the year from the user
    std::cout << "Enter a year: ";
    std::cin >> userInputString;
    std::cout << "";

    // Check if it is a leap year or not or if it is an error
    try {
        userInput = std::stoi(userInputString);

        yearBy4 = userInput % 4;
        yearBy100 = userInput % 100;
        yearBy400 = userInput % 400;

        if (yearBy4 == 0) {
            if (yearBy100 == 0 && yearBy400 == 0) {
                std::cout << "It's a leap year!!";
            } else if (yearBy100 != 0) {
                std::cout << "It's a leap year!!";
            } else {
                std::cout << "It's not a leap year!";
            }
        } else {
            std::cout << "It's not a leap year!";
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not an age! \n";
}
}
