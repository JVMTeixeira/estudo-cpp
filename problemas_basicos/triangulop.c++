#include<iostream>
using namespace std;

int pascal(int n, int k){
    if (k == n || k == 0) return 1;
    return pascal(n - 1, k - 1) + pascal(n - 1, k);
}

int main(){

    int n, k;

    while (cin >> n && cin >> k && n != -1 && k != -1) {
        printf("C(%d, %d) = %d\n", n, k, pascal(n,k));
    }
    return 0;
}