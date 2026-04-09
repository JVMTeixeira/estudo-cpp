#include <iostream>

int main() {
    unsigned long long x, n;

    std::ios_base::sync_with_stdio(false);

    
    std::cin >> x >> n;

    while (n--){
        unsigned long long bit = 0;

        std::cin >> bit;

        bit = (1ULL << bit);

        if(x & bit) std::cout << "acesa" << std::endl;
        else std::cout << "apagada" << std::endl;

        

    }
    return 0;
}