#include<iostream>

int main(){


    long long n;
    std::cin >> n;

    long long temp, soma_array = 0, soma_n = 0;
    for(int i = 0; i < n - 1 ; i++){
        std::cin >> temp;
        soma_array += temp;
    }
    
    soma_n = (1 + n) * n/2;
    
    std::cout << soma_n - soma_array;
    
    return 0;
}