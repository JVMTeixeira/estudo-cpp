#include <iostream>

int main() {
    long long n;
    unsigned long long bit = 0;

    std::ios_base::sync_with_stdio(false);

    std::cin >> n;

    while (n--){
        unsigned long long a = 0,b = 0,c = 0, y = 0;

        std::cin >> a >> b >> y;
    
        if((a | b | y )!= y) std::cout << -1 << std::endl;
        
        else {
            c = (a | b) ^ y;
            std::cout << c << std::endl;
        }
    }
    return 0;
}