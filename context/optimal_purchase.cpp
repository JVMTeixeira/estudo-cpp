    #include <bits/stdc++.h>
    using namespace std;

    long long calc (long long x, long long y, long long z){
        long long total = 0, resto=0, x2=0;

        if(y * 3 <= z){

            total = x * y;

        }else {

            x2 = x/3;
            resto = x % 3;

            if(resto * y > z){
                total += z;
            }else{
                total += resto * y;
            }

            total += x2 * z;

        }
        return total;
    }

    int main() {
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        long long n, x, y, z;
        cin >> n ;
        while(n--){
            cin >> x >> y >> z;
            cout << calc(x,y,z) << '\n';
        }

        return 0;
    }