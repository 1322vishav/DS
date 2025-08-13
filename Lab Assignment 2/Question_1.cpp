#include <iostream>
using namespace std;

int binary(int a[],int n,int element){
    int low=0,high=n-1;
    while (low<=high) {
        int mid=(low+high)/2;
        if (a[mid]==element) return mid;
        else if (a[mid]<element) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int main(){
    int a[]={2,5,6,9,13,14,19};
    int n=7;
    int element;
    cout<<"Enter the element you want to search: ";
    cin>>element;
    int res=binary(a,n,element);
    if (res!=-1)
        cout<<"Element found at index "<<res<<endl;
    else
        cout<<"Element not found"<<endl;
    return 0;
}
