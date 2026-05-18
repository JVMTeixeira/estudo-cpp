    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n, n2, x;
        cin >> n >> n2;
        vector<int> v;
        v.push_back(0);
        while (n--) {
            cin >> x;
            v.push_back(x);
        }

        int t = (int)v.size();

        while (n2--) {
            cin >> x;
            if(x == 1 && v[x] == -1){
                cout << "NULL\n";
            }else if(x == 1){
                cout << "RAIZ\n";
            }else if(x%2 == 0){
                if(v[x/2] == -1)
                    cout << "NULL\n";
                else
                cout << v[x/2] << '\n';
            }else{
                if(v[(x-1)/2] == -1)
                    cout << "NULL\n";
                else
                cout << v[(x-1)/2] << '\n';
            }
        }

        return 0;
    }