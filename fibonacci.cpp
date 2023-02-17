#include<iostream>
using namespace std;
int main() {
    int n=10, sum=0;
    // cin>>n;
    int x=0,y=1;
    cout<<x<<" "<<y<<" ";
    for(int i=1;i<=n;i++) {
        int next = x+y;
        cout<<next<<" ";
        x=y;
        y=next;
    }
    // cout<<sum;
}