#include <bits/stdc++.h>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    struct Jogadores {
        string s;
        string min;
        string sec;
        int total;
    };

    vector<Jogadores> jogadores;

    Jogadores x;

    int n;
    string s, nums;
    

    cin >> n;
    while(n--){

        cin >> s >> nums;
        x.s = s;
        int pos = nums.find(':');
        x.min = nums.substr(0, pos);
        x.sec = nums.substr(pos + 1);
        x.total = (stoi(x.min) * 60) + stoi(x.sec);
        jogadores.push_back(x);

    }

    auto comparar = [](const Jogadores &a, const Jogadores &b){
        if (a.total == b.total)return a.s > b.s; 
        return a.total > b.total;
    };
    stable_sort(jogadores.begin(), jogadores.end(),comparar);

    for(int i = 0; i < jogadores.size(); i++){
        cout << i+1 << ". " << jogadores[i].min << ':' << jogadores[i].sec << " - " << jogadores[i].s << '\n';
    }

    return 0;
}