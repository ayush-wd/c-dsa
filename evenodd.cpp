#include<iostream>
using namespace std;
bool evenOdd(int a) {
    if(a%2==0) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    bool ans;
    int a;
    cin>>a;
    ans = evenOdd(a);
    cout<<ans;
}