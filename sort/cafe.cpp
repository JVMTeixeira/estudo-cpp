#include <bits/stdc++.h>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,n2,x,y;
    cin >> n;
    vector<int> v;

    auto comparar = [](const int &a, const int &b){
        return a < b;
    };

    while(n--){
        cin >> n2;
        v.push_back(n2);
    }

    stable_sort(v.begin(),v.end(),comparar);

    cin >> n2;
    while(n2--){
        cin >> x;

        y = upper_bound(v.begin(),v.end(),x) - v.begin();
        cout << y << '\n';
    }
    
    return 0;
}