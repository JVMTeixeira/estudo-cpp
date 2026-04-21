#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    queue<int> cartas;

    while(n--) cartas.push(n + 1);


    cout << "Descarte: ";

    while(cartas.size() != 1){

        cout << cartas.front();
        cartas.pop();

        cartas.push(cartas.front());
        cartas.pop();

        if(cartas.size() != 1) cout << ", ";
    }
    cout << "\nUltima carta: " << cartas.front() << '\n';

    return 0;
}