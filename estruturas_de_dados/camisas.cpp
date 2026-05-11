#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> a, b;
    string x;
    int i,n;
    cin >> n;

    while(n--){
        cin >> x;

        if(x == "COLOCAR"){
            cin >> i;
            if(b.empty() || i >= b.top()) b.push(i);
            a.push(i);


        }else if(x == "MAIOR"){
            
            if(b.empty()) cout << "CAIXA VAZIA\n";
            else cout << b.top() << '\n';

        }else if(x == "RETIRAR"){

            if(!a.empty()){

                cout << a.top() << " REMOVIDO\n";
                if(a.top() == b.top()) b.pop();
                a.pop();

            }else{
                cout << "CAIXA VAZIA\n";
            }

        }
    }

    return 0;
}