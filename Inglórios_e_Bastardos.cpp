#include <iostream>

int main() {
    unsigned long long x, y, z , w, tudo;

    std::ios_base::sync_with_stdio(false);

    
    std::cin >> x >> y >> z >> w;

    tudo = x ^ y ^ z ^ w;
    x ^= tudo;
    y ^= tudo;
    z ^= tudo;
    w ^= tudo;


    std::cout << x << ' ' << y << ' ' << z << ' ' << w << std::endl;

    
    return 0;
}