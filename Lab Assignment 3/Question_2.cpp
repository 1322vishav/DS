#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stack<char> st;
    for(char c:s)
        st.push(c);
    string out;
    while(!st.empty()){
        out+=st.top();
        st.pop();
    }
    cout<<out<<"\n";
}
