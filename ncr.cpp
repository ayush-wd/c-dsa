#include<iostream>
using namespace std;
int fact(int n) {
    int ans=1;
    for(int i=1;i<=n;i++) {
        ans=ans*i;
    }
    return ans;
}
int ncr(int n, int r) {
    int ans;
    ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main() {
    int a,b,ans;
    cin>>a>>b;
    ans=ncr(a,b);
    cout<<ans;
}