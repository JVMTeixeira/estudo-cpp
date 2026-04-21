#include <bits/stdc++.h>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);

    vector<queue<string>> v = {{},{},{},{}};
    string s;
    
    int cont = 0, printou = 0;
    char direcao;

    while(cin >> s && s[0] != '0'){

        if(s[0] == 'N' || s[0] == 'S' || s[0] == 'L' || s[0] == 'O'){

            direcao = s[0];

        }else if(s[0] == 'B') {            

            if(direcao == 'N') v[0].push(s);
            else if(direcao == 'S') v[1].push(s);
            else if(direcao == 'L') v[2].push(s);
            else if(direcao == 'O') v[3].push(s);

        }
    }

    while(!v[0].empty() || !v[1].empty() || !v[2].empty() || !v[3].empty()){

        if(!v[cont%4].empty()){
            cout << v[cont%4].front();
            v[cont%4].pop();
            printou = 1;
        }

        if((!v[0].empty() || !v[1].empty() || !v[2].empty() || !v[3].empty()) && printou == 1){
            cout << ' ';
        }

        cont++;
        printou = 0;
    }

    cout << '\n';

    return 0;
}