#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c){
    return c=='+'||c=='-'||c=='*'||c=='/'||c=='^';
}

int applyOp(int a,int b,char op){
    if(op=='+') return a+b;
    if(op=='-') return a-b;
    if(op=='*') return a*b;
    if(op=='/'){
        if(b==0){
            cout<<"Error: Division by zero\n";
            exit(0);
        }
        return a/b;
    }
    if(op=='^') return pow(a,b);
    return 0;
}

int main(){
    string expr;
    cout<<"Enter postfix expression: ";
    cin>>expr;

    stack<int> st;
    for(char c:expr){
        if(isdigit(c)){
            st.push(c-'0'); 
        }
        else if(isOperator(c)){
            if(st.size()<2){
                cout<<"Error: insufficient values\n";
                return 0;
            }
            int b=st.top(); st.pop();
            int a=st.top(); st.pop();
            int res=applyOp(a,b,c);
            st.push(res);
        }
        else{
            cout<<"Error: invalid character "<<c<<"\n";
            return 0;
        }
    }

    if(st.size()==1){
        cout<<"Result = "<<st.top()<<"\n";
    }
    else{
        cout<<"Error: invalid postfix expression\n";
    }
    return 0;
}
