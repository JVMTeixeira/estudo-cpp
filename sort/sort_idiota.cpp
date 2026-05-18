#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, n2, x;
    cin >> n;
    vector<int> v;
    
    while(n--){ 
        cin >> x;
        v.push_back(x);
    }

    stable_sort(v.begin(),v.end());

    int t = v.size();

    for(int i = 0; i < t; i ++){
        cout << v[i] << '\n';
    }

    return 0;
}