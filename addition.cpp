// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: September 2019
// This program calculates the sum of two integers
//  with user input

#include <iostream>

int main() {
    // this function calculates sum of two integers

    // input
    int firstnumber;
    int secondnumber;

    std::cout << "Enter the first number (integer): ";
    std::cin >> firstnumber;
    std::cout << "Enter the second number (integer): ";
    std::cin >> secondnumber;

    // process
    int total = firstnumber + secondnumber;

    // output
    std::cout << "" << std::endl;
    std::cout << firstnumber<< " + " << secondnumber << " = "
    << total << std::endl;
}
