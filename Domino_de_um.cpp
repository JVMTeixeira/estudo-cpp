#include <bits/stdc++.h>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);

    int n, um, dois;
    cin >> n;

    queue<pair<int,int>> q;

    while(n--){
        cin >> um >> dois;
        q.push(make_pair(um,dois));
    }

    while(!q.empty()){
        
        cout << q.front().first << ' ' << q.front().second << '\n';
        q.pop();

        if(q.empty()) break;

        if(q.front().first + q.front().second == 7){
            q.push(make_pair(q.front().first,q.front().second));
        }
        
        q.pop();


    }

    return 0;
}