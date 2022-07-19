//
// Created by koso on 19/07/22.
//

#include <vector>
#include <algorithm>
#include "iostream"

void print_vector(std::vector<unsigned long long> vector) {
    for(unsigned long long i = 0; i < vector.size(); ++i)
        std::cout << vector.at(i) << " ";
    std::cout << std::endl;
}

bool is_permutation_beautiful(std::vector<unsigned long long> vector) {
    for(unsigned long long i = 0; i < vector.size()-1; ++i) {
        if(abs(vector.at(i+1) - vector.at(i)) == 1) {
            return false;
        }
    }
    return true;
}

void permutations(unsigned long long n) {

    std::vector<unsigned long long> input;
    for(unsigned long long i = 2u; i <= n; i=i+2) {
        input.push_back(i);
    }

    for(unsigned long long i = 1u; i <= n; i=i+2) {
        input.push_back(i);
    }

    if(is_permutation_beautiful(input)) {
        print_vector(input);
    } else {
        std::cout << "NO SOLUTION" << std::endl;
    }

}

int main() {

    unsigned long long n;
    std::cin >> n;

    permutations(n);

}