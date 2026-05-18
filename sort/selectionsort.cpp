#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &v,int &x){
    int minindex;
    for(int i = 0; i < v.size()-1; i++){

        minindex = i;

        for(int j = i+1;j < v.size();j++){
            if(v[j]< v[minindex])minindex = j;
        }

        if(minindex != i){
            swap(v[i],v[minindex]);
            x++;
        }
    }

}

void imprimir(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        if(i == v.size()-1) cout << v[i];
        else cout << v[i] << ' ';
    }
    cout << endl;
}

int main() {

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    int n, x = 0;
    cin >> n;
    while(cin >> x) v.push_back(x);
    x = 0;

    selectionsort(v, x);
    imprimir(v);
    cout << x << endl;

    return 0;
}