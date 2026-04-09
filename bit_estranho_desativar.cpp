#include <iostream>


int main() {
    long long n , n2;
    unsigned long long bit = 0;

    std::ios_base::sync_with_stdio(false);

    std::cin >> n;
    std::cin >> n2;
    bit = (1ULL << n2);

    while (n--){
        unsigned long long x = 0;

        std::cin >> x;

        if(x & bit){
            x ^= bit;
        }

        std::cout << x << std::endl;
    }
    return 0;
}