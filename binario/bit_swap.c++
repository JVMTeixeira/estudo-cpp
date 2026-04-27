#include <iostream>


int main() {
    long long n;
    unsigned long long bit = 0;

    std::ios_base::sync_with_stdio(false);

    std::cin >> n;

    while (n--){
        unsigned long long x = 0,y = 0,z = 0;

        std::cin >> x >> y >> z;

        unsigned long long bit_do_x = (x >> z) & 1ULL, bit_do_y = (y >> z) & 1ULL;

        z = (1ULL << z);

        if(bit_do_x != bit_do_y){
            x ^= z;
            y ^= z;
        }

        std::cout << x << ' ' << y << std::endl;
    }
    return 0;
}