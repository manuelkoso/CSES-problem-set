//
// Created by koso on 18/07/22.
//

/*
 * Problem statement:
 * https://cses.fi/problemset/task/1068
 */

#include "iostream"

void weird_algorithm(long long input) {
    // base case
    if (input == 1) {
        std::cout << input << std::endl;
    } else {
        if (input % 2 == 0) {
            std::cout << input << " ";
            weird_algorithm(input / 2);
        } else {
            std::cout << input << " ";
            weird_algorithm(input * 3 + 1);
        }
    }
}

int main() {
    long long n;
    std::cin >> n;
    weird_algorithm(n);
}
