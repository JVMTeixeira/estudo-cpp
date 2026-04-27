#include <iostream>

unsigned long long contar_bits(unsigned long long x){
    int num_bits = 0;
    while (x > 0){
        if((x & 1ULL) == 1) num_bits++;

        x = x >> 1;
    }
    return num_bits;
}

int main() {
    long long n , forca;

    std::ios_base::sync_with_stdio(false);

    std::cin >> n;

    while (n--){
        unsigned long long x = 0, y = 0;

        forca = 0;
        std::cin >> x >> y;

        x = x & y;
        
        forca = contar_bits(x);

        std::cout << forca << std::endl;
    }
    return 0;
}