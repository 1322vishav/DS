#include <bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q1,q2;
public:
    void push(int x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop(){
        if(!q1.empty()) q1.pop();
    }
    int top(){
        return q1.empty()?-1:q1.front();
    }
    bool empty(){
        return q1.empty();
    }
};

int main(){
    Stack s;
    s.push(1);s.push(5);s.push(3);
    cout<<s.top()<<endl; // 3
    s.pop();
    s.push(2);
    cout<<s.top()<<endl; // 2
}
