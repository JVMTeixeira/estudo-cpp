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
        if(eh_prime(num) && (eh_prime(num +2) || eh_prime(num-2))) printf("O numero %d eh um primo gemeo\n", num);
        else printf("O numero %d nao eh um primo gemeo\n",num);
        n--;
    }


    return 0;
}