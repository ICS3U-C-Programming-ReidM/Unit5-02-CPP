// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: May 2025
// This program uses a function to calculate
// the area of a triangle with user input

#include <iostream>

float areaOfTriangle(float base, float height) {
    return (base * height) / 2;
}

int main() {
    float base, height;

    std::cout << "Enter the base of the triangle (cm): ";
    if (!(std::cin >> base)) {
        std::cout << "Error, you entered a string." << std::endl;
        return 0;
    }

    std::cout << "Enter the height of the triangle (cm): ";
    if (!(std::cin >> height)) {
        std::cout << "Error, you entered a string." << std::endl;
        return 0;
    }

    if (base <= 0 || height <= 0) {
        std::cout << "Enter positive decimal numbers." << std::endl;
        return 0;
    }

    float area = areaOfTriangle(base, height);
    std::cout << "The area of the triangle is "
              << area << " cm^2." << std::endl;

    return 0;
}
