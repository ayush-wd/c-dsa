#include<iostream>
using namespace std;
int total(int a) {
    int ans=0;
    while(a!=0) {
        if(a&1 == 1) {
            ans++;
        }
        a=a>>1;
    }
    return ans;
}
int main() {
    int a,ans,b;
    cin>>a>>b;
    ans = total(a)+total(b);
    cout<<ans;
}