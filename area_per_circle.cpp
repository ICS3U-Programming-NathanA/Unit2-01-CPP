// Copyright (c) 2021 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Sept 21 2022
// This program calculates and displays the area
// perimeter of a circle with radius 15 mm.
#include <iostream>
#include <cmath>

int main() {
  std::cout << "For a circle that has a radius\n";
  std::cout << "of 15mm:\n";
  std::cout << "\n";
  std::cout << "The area is = " << M_PI * pow(15, 2)  << " cm^2\n";
  std::cout << "the perimeter is = " << 2*M_PI*15 << " cm\n";
}
