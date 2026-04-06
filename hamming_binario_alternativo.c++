#include <iostream>

int main() {
    int n;
    std::cin >> n;

    while (n != 0) {
        unsigned long long primeiro = 0;
        std::cin >> primeiro;
        unsigned long long segundo = 0;
        std::cin >> segundo;
        
        int num_bits = 0;

        while (primeiro > 0 || segundo > 0){

            if((primeiro & 1ULL) != (segundo & 1ULL)) num_bits++;

            primeiro >>= 1;
            segundo >>= 1;
        }

        std::cout << num_bits << std::endl;

        n--;
    }
    return 0;
}