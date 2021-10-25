// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This rogram finds the largest of 10 random numbers

#include <iostream>
#include <random>
#include <array>


template<size_t N>
int SmallestNumber(std::array<int, N> numberList) {
    int smallest = numberList[0];

    for (int loopElement : numberList) {
        if (loopElement < smallest) {
            smallest = loopElement;
        }
    }

    return smallest;
}

int main() {
    // This program finds the averae of 10 random numbers

    std::array<int, 10> numberList;
    int random;
    int smallest;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);

    std::cout << "Here is a list of random numbers : \n" << std::endl;


    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        random = idist(rgen);
        numberList[loopCounter] = random;
        std::cout << "The random number " << loopCounter << " is : "
        << random << std::endl;
    }

    smallest = SmallestNumber(numberList);
    std::cout << "" << std::endl;
    std::cout << "The smallest number is " << smallest << std::endl;

    std::cout << "\nDone." << std::endl;
}
