#include <iostream>
#include <math.h>

int main() {
    long long n, casa;
    unsigned long long bit = 0;

    std::ios_base::sync_with_stdio(false);

    std::cin >> n;
    std::cin >> casa;
    bit += (1ULL << casa);
    while (n--){
        unsigned long long x = 0;

        std::cin >> x;

        x |= bit;

        std::cout << x << std::endl;
    }
    return 0;
}