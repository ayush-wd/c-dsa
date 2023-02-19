#include<iostream>
using namespace std;
int power(int a,int b) {
    int ans=1;
    for(int i=1;i<=b;i++) {
        ans=ans*a;
    }
    return ans;
}
int main() {
    int a,b,x=1;
    cin>>a>>b;
    x=power(a,b);
    cout<<x;
}