//
// Created by koso on 18/07/22.
//

// have to implement some sort of algorithm

#include <vector>
#include "iostream"

long long increasing_array(std::vector<long long> input) {

    unsigned long long counter = 0;

    for(unsigned long long i = 0; i < input.size() - 1; ++i) {

        if(input[i] > input[i+1]) {
            counter = counter + input[i] - input[i+1];
            input[i+1] = input[i];
        }

    }

    return counter;

}

int main() {

    unsigned long long n;
    std::cin >> n;

    std::vector<long long> input_numbers;

    for(unsigned long long i = 0u; i < n; ++i) {
        long long number;
        std::cin >> number;
        input_numbers.push_back(number);
    }

    std::cout << increasing_array(input_numbers) << std::endl;

}