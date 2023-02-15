#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    int y=0;
    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout<<j+y;
            j=j+1;
        }
        y=y+3;
        cout<<endl;
        i=i+1;
    }
}