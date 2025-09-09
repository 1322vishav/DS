#include <bits/stdc++.h>
using namespace std;

void nextGreaterElement(int arr[],int n){
    int nge[n];
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&st.top()<=arr[i]) st.pop();
        if(st.empty()) nge[i]=-1;
        else nge[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<"-->"<<nge[i]<<endl;
}

int main(){
    int arr[]={4,5,2,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    nextGreaterElement(arr,n);
    return 0;
}
