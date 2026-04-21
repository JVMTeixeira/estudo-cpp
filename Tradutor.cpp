#include <bits/stdc++.h>
using namespace std;

int main() {

    std::ios_base::sync_with_stdio(false);

    string s;
    stack<char> st;
    
    getline(cin,s);

    while(!s.empty()){
        const char c = s.back();

        if(c == ']' || c == '}' || c == ')') st.push(c);

        else if(c == '[' || c == '{' || c == '('){

            if(st.empty()){
                cout << "SyntaxError\n";
                return 0;

            }else if(st.top() == ']' && c == '[') st.pop();

            else if(st.top() == '}' && c == '{') st.pop();

            else if(st.top() == ')' && c == '(') st.pop();

            else {
                cout << "SyntaxError\n";
                return 0;
            }

        }

        s.pop_back();
    }

    if(st.empty()) cout << "OK\n";
    else cout << "SyntaxError\n";

    return 0;
}