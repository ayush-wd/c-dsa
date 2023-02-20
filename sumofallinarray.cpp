#include<iostream>
using namespace std;
int printarr(int n[], int size) {
    int sum=0;
    for(int i=0;i<size;i++) {
        sum+=n[i];
    }
    return sum;
}
int main() {
    int sum=0;
    int s[3] = {11,41,9};
    sum=printarr(s,3);
    cout<<sum;
}