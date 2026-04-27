#include <bits/stdc++.h>
using namespace std;


long long calcula_views(long long tempo_atual, const vector<pair<int,int>>& v) {
    long long total_views = 0;
    int n = v.size();
    
    for (int i = 0; i < n; i++) {
        if (tempo_atual >= v[i].first) {

            total_views += 1 + (tempo_atual - v[i].first) / v[i].second;
        }
    }
    return total_views;
}

long long busca_binaria(int x, const vector<pair<int,int>>& v) {
    long long ini = 0, fim = 200000000000000;

    long long resposta = -1; 

    while(ini <= fim) {

        long long meio = ini + (fim - ini) / 2;

        long long view_no_meio = calcula_views(meio, v);

        if (view_no_meio >= x) {

            resposta = meio;
            
            fim = meio - 1;

        } else ini = meio + 1;

    }

    return resposta;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x;

    cin >> n >> x;

    vector<pair<int,int>> v;    

    while(n--){
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    
    long long resposta = busca_binaria(x,v);

    cout << resposta << '\n';

    return 0;
}