//
// Created by koso on 18/07/22.
//

#include "iostream"

int repetitions(std::string input_string) {
    long long max_rep = 1;
    unsigned long long index;
    for(index = 0u; index < input_string.size(); ++index) {
        long long temp_counter = 1;
        for(; index < input_string.size() - 1; ++index) {
            if(input_string.at(index) == input_string.at(index + 1)) {
                temp_counter = temp_counter + 1;
                if(temp_counter > max_rep) {
                    max_rep = temp_counter;
                }
            } else {
                break;
            }
        }
    }
    return max_rep;
}

int main() {

    std::string input_string;
    getline(std::cin, input_string);
    std::cout << repetitions(input_string) << std::endl;

}