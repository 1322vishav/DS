#include <iostream>
using namespace std;

int main(){
    int a[]={3,2,4,1,5,7,8,6};
    int n=8;
    int inv=0;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++){
            if (a[i]>a[j]){
                inv++; 
            }
        }
    }
    cout<<"Number of inversions: "<<inv<<endl;
    return 0;
}
