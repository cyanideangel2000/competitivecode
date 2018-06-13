#include <iostream>
#include <vector>
 
uint64_t count_res(uint64_t number) {
    uint64_t* zero = new uint64_t[number](); // Bitstrings ending with 0
    uint64_t* ones = new uint64_t[number](); // Bitstrings ending with 1

    zero[0] = 1; ones[0] = 1;
    for (uint64_t i = 1; i < number; i++) {
        zero[i] = zero[i - 1] + ones[i -1];
        ones[i] = zero[i -1];
    }

    uint64_t res = zero[number - 1] + ones[number - 1];
    delete[] zero; delete[] ones;
    return res;
}
 
int main() {
    uint64_t tot_cases;
    std::cin >> tot_cases;
    std::vector<uint64_t> res;
    std::cin.get();

    for  (uint64_t i = 0; i < tot_cases; i++) {
        uint64_t number ;
        std::cin >> number;
        std::cin.get();
        res.push_back(count_res(number));
    }
    std::vector<uint64_t>::iterator it = res.begin();
    for (; it != res.end(); it++)
        std::cout << *it << '\n';

    return 0;
}
