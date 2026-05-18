#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, n2, x;
    cin >> n >> n2;

    if(n == 1){
        cout << "NULL\n";
        return 0;
    }

    vector<int> v;
    v.push_back(0);
    while (n--) {
        cin >> x;
        v.push_back(x);
    }

    int t = (int)v.size();

    while (n2--) {
        cin >> x;

        int f_esquerda  = x * 2;
        int f_direita = x * 2 + 1;

        if (f_esquerda >= t || v[f_esquerda] == -1) cout << "NULL" << ' ';

        else cout << v[f_esquerda] << ' ';

        if (f_direita >= t || v[f_direita] == -1) cout << "NULL\n";

        else cout << v[f_direita] << '\n';
    }

    return 0;
}