#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n) {
        int j=1;
        char ch = 'A'+i-j;
        while(j<=i) {
            cout<<ch;
            j=j+1;
            // ch=ch+1;
        }
        cout<<endl;
        i=i+1;
    }
}