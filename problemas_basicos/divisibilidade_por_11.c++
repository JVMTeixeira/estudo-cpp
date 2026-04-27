#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    while (std::cin >> n && n != -1) {
        string d;
        cin >> d;
        cout << d << ": ";
        int t = d.length();

        int soma_par = 0, soma_impar = 0;
        int soma_ou_subtracao = 1;

        for (char c : d){

            if(soma_ou_subtracao){
                soma_par += (c - 48);
                soma_ou_subtracao--;
            }else{
                soma_impar += (c - 48);
                soma_ou_subtracao++;
            }
        }
        int soma = soma_par - soma_impar;
        if (soma % 11 == 0) {
            printf("%d - %d = %d - sim\n", soma_par,soma_impar, soma);
        } else {
            printf("%d - %d = %d - nao\n", soma_par,soma_impar, soma);
        }

    }
    return 0;
}