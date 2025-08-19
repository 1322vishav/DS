#include <iostream>
using namespace std;

const int MAX=100;  
int arr[MAX];
int n=0;

void create() {
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
}

void display() {
    if(n==0) 
    { 
        cout<<"Array is empty\n"; 
        return; 
    }
    cout<<"Array elements: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void insert() {
    int pos,x;
    cout<<"Enter position (0-based) and value: ";
    cin>>pos>>x;
    if(pos<0||pos>n) {
         cout << "Invalid position\n"; 
         return; 
        }
    for(int i=n;i>pos;i--) {
        arr[i]=arr[i-1];
    }
    arr[pos]=x;n++;
}

void del() {
    int pos;
    cout<<"Enter position to delete: ";
    cin>>pos;
    if (pos<0||pos>=n) { 
        cout<<"Invalid position\n"; 
        return; 
    }
    for (int i=pos;i<n-1;i++) {
        arr[i]=arr[i+1];
    }
    n--;
}

void linear_search() {
    int val;
    cout<<"Enter value to search: ";
    cin>>val;
    for(int i=0;i<n;i++) {
        if (arr[i]==val) {
            cout<<"Found at index "<<i<<"\n";
            return;
        }
    }
    cout<<"Not found\n";
}

int main() {
    int choice;
    while (true) {
        cout<<"Welcome to array operations \n";
        cout<<"1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n";
        cin>>choice;

        if(choice==1) {
            create();
        } 
        else if(choice==2) {
            display();
        } 
        else if (choice==3) {
            insert();
        } 
        else if (choice==4) {
            del();
        } 
        else if (choice==5) {
            linear_search();
        } 
        else if (choice==6) {
            break;   // exit loop
        } 
        else {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}