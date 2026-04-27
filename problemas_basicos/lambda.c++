#include <iostream>
#include <string>

long long lambda(long long n){
    if(n <=1) return n;
    return 2 * lambda(n-1)+ lambda(n-2);
}

int main() {
    long long n, temp;
    std::cin >> n;
    while (n != 0) {
        std::cin >> temp;
        std::cout << lambda(temp) << std::endl;
        n--;
    }
    return 0;
}