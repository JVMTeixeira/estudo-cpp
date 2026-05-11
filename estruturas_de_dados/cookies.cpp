#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<pair<int,int>> a;

    int x,n, y, d = 1;
    cin >> n >> x;

    while(n--){
        cin >> y;
        a.push(make_pair(d,y));
        d++;
    }

    while(a.size() > 1){
        if(a.front().second <= x){
            a.pop();
        }else{
            a.push(make_pair(a.front().first, a.front().second - x));
            a.pop();
        }
    }

    cout << a.front().first << '\n';

    return 0;
}