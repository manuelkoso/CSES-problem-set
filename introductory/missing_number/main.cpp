//
// Created by koso on 18/07/22.
//

#include <iostream>
#include <vector>
#include <algorithm>

long long missing_number(std::vector<long long >& input_numbers) {

    if(input_numbers.size() == 1) {
        if(input_numbers[0] == 1) return 2;
        return 1;
    }

    sort(input_numbers.begin(),input_numbers.end());
    for(unsigned long long i = 0u; i < input_numbers.size() - 1; ++i) {
        if(input_numbers[i+1] != input_numbers[i] + 1) {
            return input_numbers[i] + 1;
        }
    }
    return -1;
}

int main() {
    unsigned long long n;
    std::cin >> n;

    std::vector<long long> input_numbers;

    for(unsigned long long i = 0u; i < n-1; ++i) {
        long long number;
        std::cin >> number;
        input_numbers.push_back(number);
    }

    std::cout << missing_number(input_numbers) << std::endl;

}