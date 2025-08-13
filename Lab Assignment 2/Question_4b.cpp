#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    int len=0;
    while (s[len]!='\0') len++;
    cout<<"Reversed String:";
    for (int i=len-1;i>=0;i--) {
        cout<<s[i];
    }
    return 0;
}
