#include <iostream>

unsigned long long contar_bits(unsigned long long x){
    int num_bits = 0;
    while (x > 0){
        if((x & 1) == 1) num_bits++;

        x = x >> 1;
    }
    return num_bits;
}

int main() {
    int n;
    std::cin >> n;

    while (n != 0) {
        unsigned long long primeiro = 0;
        std::cin >> primeiro;
        unsigned long long segundo = 0;
        std::cin >> segundo;
        
        unsigned long long x = primeiro ^ segundo;
        int n2;
        n2 = contar_bits(x);
        std::cout << n2 << std::endl;

        n--;
    }
    return 0;
}