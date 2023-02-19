#include<iostream>
using namespace std;
bool prime(int n) {
    for(int i=2;i<=n/2;i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    int a;
    cin>>a;
    bool ans;
    ans = prime(a);
    cout<<ans;
}