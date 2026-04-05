#include <iostream>

int main() {
    long long n;

    std::ios_base::sync_with_stdio(false);
    
    while (std::cin >> n && n > 0) {
        long long num = 0, temp = 0;

        std::cin >> num;
        n--;

        while(n-- > 0){
            std::cin >> temp;
            num = num ^ temp;
        }
        std::cout << num << std::endl;
    }
    return 0;
}