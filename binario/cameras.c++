#include <iostream>


int main() {
    long long n;

    std::ios_base::sync_with_stdio(false);

    std::cin >> n;
    unsigned long long x = 0, temp, um = 1;

    while (n--){
        std::cin >> temp;
        x += (1ULL << temp);
    }
    std::cout << x << std::endl;
    return 0;
}