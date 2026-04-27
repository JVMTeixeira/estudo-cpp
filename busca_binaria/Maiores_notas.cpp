#include <bits/stdc++.h>
using namespace std;

int busca_binaria(int x, const vector<int>& v) {
    int ini = 0, fim = v.size() - 1;

    int primeiro_maior = v.size(); 

    while(ini <= fim) {

        int meio = ini + (fim - ini) / 2;

        if (v[meio] > x) {

            primeiro_maior = meio;
            

            fim = meio - 1;
        } 
        else {
            ini = meio + 1;
        }
    }

    return v.size() - primeiro_maior;
}

int main() {

    ios_base::sync_with_stdio(false);

    int n, n2;
    cin >> n >> n2;

    vector<int> v;

    while(n--){
        int x_temp;
        cin >> x_temp;

        v.push_back(x_temp);
    }

    while(n2--){
        int x_temp;
        cin >> x_temp;
        
        cout << busca_binaria(x_temp, v)
            <<" notas maiores que " << x_temp << '\n';
    }

    return 0;
}