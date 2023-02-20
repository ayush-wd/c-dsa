#include<iostream>
using namespace std;
bool printarr(int n[], int size, int x) {
    for(int i=0;i<size;i++) {
        if(x==n[i]) {
            return true;
        }
    }
    return false;
}
int main() {
    int sum=0, x=11;
    bool isthere;
    int s[3] = {11,41,9};
    isthere=printarr(s,3,x);
    cout<<isthere;
}