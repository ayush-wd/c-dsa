#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n) {
        int j=1;
        // char a = start;
        while(j<=n) {
            char ch = 'A'+i-1;
            cout<<ch;
            j=j+1;
        }
        cout<<endl;
        // start=start+1;
        i=i+1;
    }
}