#include <bits/stdc++.h>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    int n, bingulo;
    cin >> n;
    while(cin >> bingulo) v.push_back(bingulo);

    for(int i = 0; i < n; i++){
        if(i == n-1) cout << v[i];
        else cout << v[i] << ' ';
    }
    cout << endl;

    for(int i = 0; i < n - 1; i++){

        for(int j = 0; j < n - 1; j++){

            if(v[j] > v[j+1]){

                swap(v[j],v[j+1]);
                
                for(int i = 0; i < n; i++){
                    if(i == n-1) cout << v[i];
                    else cout << v[i] << ' ';
                }
                cout << endl;
            }

        }

    }

    return 0;
}