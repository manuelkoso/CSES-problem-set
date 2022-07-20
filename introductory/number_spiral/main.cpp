//
// Created by koso on 20/07/22.
//

#include <vector>
#include "iostream"


unsigned long long int number_spiral(unsigned long long row, unsigned long long col) {
    unsigned long long near_diagonal_location;
    if (row >= col) {
        near_diagonal_location = row;
    } else {
        near_diagonal_location = col;
    }

    unsigned long long diagonal_value = (near_diagonal_location-1)*(near_diagonal_location) + 1;

    if (near_diagonal_location == row && near_diagonal_location == col) {
        return diagonal_value;
    } else if (near_diagonal_location > row && near_diagonal_location % 2 == 1) {
        return diagonal_value + near_diagonal_location - row;
    } else if (near_diagonal_location > col && near_diagonal_location % 2 == 0) {
        return diagonal_value + near_diagonal_location - col;
    } else if (near_diagonal_location > row && near_diagonal_location % 2 == 0) {
        return diagonal_value - near_diagonal_location + row;
    } else {
        return diagonal_value - near_diagonal_location + col;
    }

}

int main() {

    unsigned long long number_of_test;

    std::vector<unsigned long long> entry;

    std::cin >> number_of_test;
    for (unsigned long long i = 0u; i < number_of_test; ++i) {
        unsigned long long row;
        unsigned long long col;
        std::cin >> row;
        std::cin >> col;
        entry.push_back(row);
        entry.push_back(col);
    }

    for (unsigned long long i = 0u; i < entry.size(); i = i + 2) {
        std::cout << number_spiral(entry.at(i), entry.at(i + 1)) << std::endl;
    }

    return 0;

}