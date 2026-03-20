#include <iostream>
#include <string>

int main() {
    int n;

    while (std::cin >> n && n != -1) {
        std::string d;
        std::cin >> d;

        long long soma = 0;
        for (char c : d) soma += (c - 48); //bingulo de tabela ascii 
        

        if (soma % 3 == 0) {
            std::cout << soma << " sim" << std::endl;
        } else {
            std::cout << soma << " nao" << std::endl;
        }
    }
    return 0;
}