#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    char ch = 'A';
    while(i<=n) {
        int j=1;
        // char a = start;
        
        while(j<=n) {
            
            cout<<ch;
            j=j+1;
            ch=ch+1;
        }
        cout<<endl;
        // start=start+1;
        i=i+1;
    }
}