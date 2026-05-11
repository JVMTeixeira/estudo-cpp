#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    int i,n;
    cin >> n;
    cin.ignore();

    while(n--){
        getline(cin,a);


        string b;
        i = a.size();

        while(i--){
            char c = a[i];

            if(c == ' ') b.push_back(' ');

            else if(c == 'i') b.push_back('i');

            else if(c == 'd') b.push_back('b');

            else if(c == 'p') b.push_back('q');

            else if(c == 'q') b.push_back('p');

            else if(c == 'b') b.push_back('d');

        }   
        cout << b << '\n';
    }

    return 0;
}