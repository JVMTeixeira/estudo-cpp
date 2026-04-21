#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    int n;

    cin >> n;

    string s;
    stack<string> nomes;

    while(n--){
        cin >> s;

        if(s.size() > 6){

            cin >> s;
            
            nomes.push(s);

        }else if(s == "chute"){

            if(!nomes.empty()) nomes.pop();

        }else if(s == "totem"){

            if(nomes.size() > 0){
                cout << "dentro do sonho de " << nomes.top() << '\n';
            }else{
                cout << "acordado\n";
            }

        }

    }


    return 0;
}