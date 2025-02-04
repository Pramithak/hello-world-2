/**
 * @file factorial.cpp
 * @brief Implements recursive and iterative factorial calculations.
 */

#include "factorial.h"
#include <stdexcept>
#include <iostream>

/**
 * @brief Computes factorial recursively.
 */
unsigned long long MathUtils::factorialRecursive(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers.");
    }
    return (n == 0 || n == 1) ? 1 : n * factorialRecursive(n - 1);
}

/**
 * @brief Computes factorial iteratively.
 */
unsigned long long MathUtils::factorialIterative(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers.");
    }

    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

/**
 * @brief Main function to demonstrate factorial calculations.
 */
int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    try {
        std::cout << "Factorial (Recursive) of " << num << " is: " 
                  << MathUtils::factorialRecursive(num) << std::endl;
        std::cout << "Factorial (Iterative) of " << num << " is: " 
                  << MathUtils::factorialIterative(num) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

