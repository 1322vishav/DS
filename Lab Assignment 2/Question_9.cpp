#include<iostream>
using namespace std;

int main() {
    int a[]={7,3,3,9,7,2,2,5,9,1};;
    int n=10;
    int distinct=0;

    for (int i=0;i<n;i++) {
        int k=0; 
        for (int j=0;j<i;j++) {
            if (a[i]==a[j]) {
                k=1;
                break;
            }
        }
        if(k==0){
            distinct++;
        }
    }   

    cout<<"No of Distinct elements: "<<distinct;
    return 0;
}
