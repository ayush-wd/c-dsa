#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    // int x=0,y=1;
    // cout<<x<<" "<<y<<" ";
    for(int i=2;i<=n/2;i++) {
        if(n%i ==0) {
            cout<<"not prime\n";
            exit(0);
        }
    }
    cout<<"prime";

  
}