#include <iostream>
using namespace std;

int main(){
    char c;
    cout<<"Enter an uppercase character: ";
    cin>>c;
    if (c>='A'&&c<='Z') {
        c=c+32;
    }
    cout<<"Lowercase character:"<<c;
    return 0;
}
