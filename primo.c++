#include <iostream>

int eh_prime(int n){
    if (n <= 1) return 0;
    if (n == 3 || n == 2) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;


    for (int i = 5; i*i <= n; i+=6){
        if (n % i == 0 || n % (i+2) == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n;
    std::cin >> n;
    int num;

    while(n!=0){
        std::cin >> num;
        if(eh_prime(num)) std::cout << "o numero "<< num <<" eh primo" << std::endl;
        else std::cout << "o numero "<< num <<" nao eh primo" << std::endl;
        n--;
    }


    return 0;
}