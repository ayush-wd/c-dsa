#include<iostream>
using namespace std;
int ap(int n) {
    int ans;
    ans=(3*n) +7;
    return ans;
}
int main() {
    int a,ans;
    cin>>a;
    ans = ap(a);
    cout<<ans;
}