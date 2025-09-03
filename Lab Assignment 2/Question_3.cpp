#include<iostream>
using namespace std;
int missingno(int*a,int n){
    int sumofn=n*(n+1)/2;
    int sumofa=0;
    for(int i=0;i<n;i++){
        sumofa+=a[i];
    }
    int no=sumofn-sumofa;
    return no;
}
int main(){
    int a[5]={1,2,3,5};
    int ele=missingno(a,5);
    cout << ele << endl;
    return 0;
}