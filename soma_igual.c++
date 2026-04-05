#include <iostream>

int main() {
    long long n;

    std::ios_base::sync_with_stdio(false);

    std::cin >> n;
    
    while (n--) {

        long long n2 = 0;

        std::cin >> n2;

        long long array[n2], soma = 0, i = 0, j = n2 - 1;
        bool tem = false;

        while(n2--)std::cin >> array[n2];

        std::cin >> soma;

        while(i != j){

            if((array[i] + array[j]) == soma){
                tem = true;
                break;
            }
            else if((array[i] + array[j]) > soma)i++;

            else if((array[i] + array[j]) < soma)j--;

        }

        if(tem)std::cout << "SIM" << std::endl;
        else std::cout << "NAO" << std::endl;
    }
    return 0;
}