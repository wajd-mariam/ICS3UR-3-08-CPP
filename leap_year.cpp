// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:October 2019
// This program uses nested if statements

#include <iostream>
#include <string>

int main() {
    // variables
    std::string year;
    int integerAsint;

    // this function calculate if the year is a leap year
    // input
    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << "" << std::endl;

    // process & output
    try {
        integerAsint = std::stoi(year);
        if (integerAsint % 4 == 0) {
            if (integerAsint % 100 == 0) {
                if (integerAsint % 400 == 0)
                    std::cout << year << " is a leap year!";
                else
                    std::cout << year << " is not a leap year.";
            } else {
                std::cout << year << " is a leap year!";
            }
        } else {
            std::cout << year << " is not a leap year";
        }
    }
    catch (std::invalid_argument) {
        std::cout << "This wasn't a valid entry. Please try again";
    }
    // Default message
    std::cout << "\n" << std::endl;
    std::cout << "Thank you for using my program!" << std::endl;
}
