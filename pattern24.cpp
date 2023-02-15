#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n) {
        int j=1,k=1,l=1,m=1;
        while(k<=n-i+1) {
            cout<<k;
            k=k+1;
        }
        while(j<=i-1) {
            cout<<"*";
            j=j+1;
        }
        while(m<=i-1) {
            cout<<"*";
            m=m+1;
        }
        while(l<=n-i+1) {
            cout<<n-i-l+2;
            l=l+1;
        }
        cout<<endl;
        i=i+1;
    }
} 