#include <bits/stdc++.h>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<long long> q;
    
    long long n, n2, ligacoes = 0;
    cin >> n >> n2;

    while(n--){
        long long x;
        cin >> x;
        q.push(x);
        while(true){
            if(x > q.front() + n2){
                q.pop();
            }else{
                break;
            }
        }
        ligacoes = q.size();
        if(n == 0){
            cout << ligacoes << '\n';
        }else cout << ligacoes << ' ';
        
    }

    return 0;
}