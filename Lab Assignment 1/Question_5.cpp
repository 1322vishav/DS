#include <iostream>
using namespace std;

int main() {
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3,n=3;

    for(int i=0;i<m;i++) {
        int sum=0;
        for(int j=0;j<n;j++) {
            sum+=A[i][j];
        }
        cout<<"Sum of row "<<i<<" = "<<sum<<"\n";
    }

    for(int j=0;j<n;j++) {
        int sum=0;
        for(int i=0;i<m;i++) {
            sum+=A[i][j];
        }
        cout<<"Sum of column "<<j<<" = "<<sum<<"\n";
    }

    return 0;
}
