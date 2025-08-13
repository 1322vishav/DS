#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,result = "";
    cout<<"Enter a string: ";
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++) {
        char ch=tolower(s[i]);
        if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')) {
            result+=s[i];
        }
    }
    cout<<"String without vowels: "<<result;
    return 0;
}
