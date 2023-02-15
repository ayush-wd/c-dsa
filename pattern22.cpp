#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n) {
        int j=1,k=1;
        while(k<=i-1) {
            cout<<" ";
            k=k+1;
        }
        while(j<=n-i+1) {
            cout<<i+j-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
} 