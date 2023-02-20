#include<iostream>
using namespace std;
void printarr(int n[], int size) {
    int max=n[0],min=n[0];
    for(int i=0;i<size;i++) {
        if(max<n[i]) {
            max=n[i];
        }
        if(min>n[i]) {
            min=n[i];
        }
    }
    cout<<endl<<max<<endl<<min;
}
int main() {
    int s[3] = {11,41,9};
    printarr(s,3);
}