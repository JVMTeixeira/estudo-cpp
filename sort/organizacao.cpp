#include <bits/stdc++.h>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,n2;
    cin >> n;
    vector<string> v;
    string s;

    auto comparar = [](const string &a, const string &b){
        return a.size() < b.size();
    };
    while(n--){

        vector<string> v;
        string s;

        cin >> n2;
        while(n2--){
            cin >> s;
            v.push_back(s);
        }
        stable_sort(v.begin(),v.end(),comparar);
            
        for(int i = 0; i < v.size(); i++){
            if (i == v.size()-1){
                cout << v[i] << '\n';
                break;
            }
            cout << v[i] << ' ';
        }
    }
    
    return 0;
}