#include <iostream>
using namespace std;

int main() {
    int A[2][3]={{1,2,3},{4,5,6}};
    int B[3][2];
    int m=2,n=3;

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            B[j][i]=A[i][j];
        }
    }

    cout<<"Transpose:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<B[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
