#include <iostream>
using namespace std;

int main() {
    int A[2][2]={{1,2},{3,4}};
    int B[2][2]={{5,6},{7,8}};
    int C[2][2];
    int m=2,n=2,p=2;

    for(int i=0;i<m;i++) {
        for(int j=0;j<p;j++) {
            C[i][j]=0;
            for(int k=0;k<n;k++) {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    cout<<"Result of multiplication:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<p;j++) {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
