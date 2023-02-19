#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int b=0,c=0,d=0,e=0;
    while(a>0) {
        if(a/100 > 0) {
            b=(a/100);
            a=a-((a/100)*100);
        }
        else if(a/50 > 0) {          
            c=(a/50);
            a=a-((a/50)*50);
        }
        else if(a/20 > 0) {
            d=(a/20);
            cout<<d;
            a=a-((a/20)*20);
        }
        else if(a/1 > 0) {
            e=(a/1);
            a=a-((a/1)*1);
        }
    }
    cout<<endl<<b<<endl<<c<<endl<<d<<endl<<e;
}