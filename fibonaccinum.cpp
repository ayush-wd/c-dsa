#include<iostream>
using namespace std;
void fib(int n) {
    int x=0,y=1;
    cout<<x<<" "<<y<<" ";
    for(int i=1;i<=n-2;i++) {
        int next = x+y;
        cout<<next<<" ";
        x=y;
        y=next;
    }
    // return 0;
}
int main() {
    int n;
    cin>>n;
    fib(n);
}