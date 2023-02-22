#include<iostream>
using namespace std;
void swapalt(int n[], int size) {
    // if(size%2==0) {
        for(int i=0;i<size;i=i+2) {
            if(i+1<size) {
                swap(n[i],n[i+1]);
            }
        }
    // }
    // else {
    //     for(int i=0;i<size-1;i=i+2) {
    //     swap(n[i],n[i+1]);
    //     }
    // }
    
    for(int i=0;i<size;i++) {
        cout<<n[i];
    }
}
int main() {
    int s[5] = {11,5,88,41,9};
    swapalt(s,5);
}