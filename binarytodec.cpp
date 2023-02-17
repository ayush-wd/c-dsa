#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int bit=0,ans=0,i=0;
    while(n!=0) {
        bit=n%10;
        ans = bit*pow(2,i) + ans;
        // cout<<ans<<endl;
        n=n/10;
        i++;
    }
    cout<<ans;
}