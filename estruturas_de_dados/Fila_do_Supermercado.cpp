#include <bits/stdc++.h>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int fila = 0, preferencial = 0;
    string s;

    while(cin >> s && s != "fim"){
        if(s == "comum"){
            fila++;
        }else{
            preferencial++;
        }
    }
    while(fila > 0 || preferencial > 0){
        if(fila > 0){
            cout << "comum\n";
            fila--;
        }
        if(preferencial > 0){
            cout << "preferencial\n";
            preferencial--;
            if(preferencial > 0){
                cout << "preferencial\n";
                preferencial--;
            }
        }
    }

    return 0;
}