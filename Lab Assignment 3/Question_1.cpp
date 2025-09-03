#include <iostream>
using namespace std;

struct Stack{
    int *arr;
    int top,cap;
    Stack(int c){
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    ~Stack(){
        delete[] arr;
    }
    bool isEmpty()const{
        return top==-1;
    }
    bool isFull()const{
        return top==cap-1;
    }
    void push(int x){
        if(isFull())
            cout<<"Stack Overflow\n";
        else
            arr[++top]=x;
    }
    void pop(){
        if(isEmpty())
            cout<<"Stack Underflow\n";
        else
            top--;
    }
    int peek()const{
        if(isEmpty()){
            cout<<"Stack Empty\n";
            return -1;
        }
        else
            return arr[top];
    }
    void display()const{
        if(isEmpty()){
            cout<<"Stack Empty\n";
            return;
        }
        for(int i=top;i>=0;--i)
            cout<<arr[i]<<(i?" ":"\n");
    }
};

int main(){
    Stack st(100);
    int choice,x;
    do{
        cout<<"\n1.Push 2.Pop 3.isEmpty 4.isFull 5.Display 6.Peek 0.Exit\nChoice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter value: ";
                cin>>x;
                st.push(x);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                if(st.isEmpty())
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
                break;
            case 4:
                if(st.isFull())
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
                break;
            case 5:
                st.display();
                break;
            case 6:
                cout<<"Top: "<<st.peek()<<"\n";
                break;
            case 0:
                break;
            default:
                cout<<"Invalid choice\n";
        }
    }while(choice!=0);
    return 0;
}
