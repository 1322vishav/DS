#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);

    for(int i=0;s2[i]!='\0';i++) {
        s1+=s2[i];
    }
    cout<<"Concatenated String:"<<s1;
    return 0;
}
