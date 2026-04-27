#include <bits/stdc++.h>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    stack<string> st;
    
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        if(s[0] == '<'){
            if(st.empty()){
                cout << "pagina em branco\n";
            }else{
                st.pop(); 
                
                if(st.empty()) cout << "pagina em branco\n";
                else cout << st.top() << '\n';
            }
        }else{
            cout << s << '\n';
            st.push(s);
        }
    }

    return 0;
}