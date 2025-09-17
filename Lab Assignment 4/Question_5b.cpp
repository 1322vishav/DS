#include <bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q;
public:
    void push(int x){
        int size=q.size();
        q.push(x);
        for(int i=0;i<size;i++){
            q.push(q.front());
            q.pop();
        }
    }
    void pop(){
        if(!q.empty()) q.pop();
    }
    int top(){
        return q.empty()?-1:q.front();
    }
    bool empty(){
        return q.empty();
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
