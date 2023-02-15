#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n) {
        int j=1,k=1,l=1;
        while(k<=n-i) {
            cout<<" ";
            k=k+1;
        }
        while(j<=i) {
            cout<<j;
            j=j+1;
        }
        while(l<=i-1) {
            cout<<i-l;
            l=l+1;
        }
        cout<<endl;
        i=i+1;
    }
} 