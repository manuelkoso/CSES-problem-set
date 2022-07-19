//
// Created by koso on 19/07/22.
//

#include <array>
#include <vector>
#include "iostream"

void print_vector(std::vector<long long int> vector) {
    for(int i = 0; i < vector.size(); ++i)
        std::cout << vector.at(i) << " ";
    std::cout << std::endl;
}

bool is_permutation_beautiful(std::vector<long long int> vector) {
    for(int i = 0; i < vector.size()-1; ++i) {
        if(abs(vector.at(i+1) - vector.at(i)) == 1) {
            return false;
        }
    }
    return true;
}

void permutations(long long n) {

    srand (time(NULL));

    int counter = 0;

    std::vector<long long> input;
    for(int i = 0; i < n; ++i)
        input.push_back(i+1);

    for(long long i = 0; i < n; ++i) {
        for(long long j = 0; j < n; ++j) {
            long long random = rand() % n;
            long long tmp = input.at(j);
            input.at(j) = input.at(random);
            input.at(random) = tmp;
            if(is_permutation_beautiful(input)) {
                print_vector(input);
                ++counter;
            }
        }
    }
    if(counter == 0)
        std::cout << "NO SOLUTION" << std::endl;

}

int main() {

    long long n;
    std::cin >> n;

    permutations(n);

}