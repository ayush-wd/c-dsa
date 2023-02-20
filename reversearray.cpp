#include<iostream>
using namespace std;
void reversearray(int n[], int size) {

    for(int i=0;i<size/2;i++) {
        swap(n[i],n[size-i-1]);
    }

    for(int i=0;i<size;i++) {
        cout<<n[i];
    }
}
int main() {
    int s[5] = {11,5,88,41,9};
    reversearray(s,5);
}