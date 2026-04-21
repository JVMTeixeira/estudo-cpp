#include <bits/stdc++.h>
using namespace std;

long long busca_binaria(int x, const vector<int>& v, int n2) {
    long long ini = 0, fim = v.size() - 1;

    long long primeiro_x = -1;
    long long x_linha, x_coluna;

    while(ini <= fim) {

        long long meio = ini + (fim - ini) / 2;

        if(v[meio] == x){

            primeiro_x = meio;
            fim = meio - 1;

        }else if (v[meio] > x) fim = meio - 1;
        else ini = meio + 1;

    }

    if(primeiro_x == -1){
        cout << -1 << ' ' << -1 << '\n';
        return 0;
    }

    x_linha = primeiro_x / n2;

    x_coluna = primeiro_x % n2;

    cout << x_linha << ' ' << x_coluna << '\n';

    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , n2;
    long long x;

    cin >> n >> n2 >> x;

    int n3 = n * n2;

    vector<int> v;    

    while(n3--){
        int a;
        cin >> a;
        v.push_back(a);
    }

    while(x--){
        int a;
        cin >> a;
        busca_binaria(a,v,n2);

    }
    
    return 0;
}