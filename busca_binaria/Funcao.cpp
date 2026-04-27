#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double A, B, C;
 
    if (cin >> A >> B >> C) {

        double ini = 0.0;
        double fim = 1000000000.0;
        double meio;
   
        for (int i = 0; i < 100; i++) {
            meio = ini + (fim - ini) / 2.0;

            double current_value = A * meio + B * cos(meio);
 
            if (current_value < C) {
                ini = meio;
            } else {
                fim = meio;
            }
        }
        cout << fixed << setprecision(4) << meio << "\n";
    }

    return 0;
}