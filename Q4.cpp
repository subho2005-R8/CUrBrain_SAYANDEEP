#include<iostream>
using namespace std;
int main(){
    int k,a,n;
    cout<<"enter a number: ";
    cin>>k;
    int u=k;
    n=0;
    int h;
    h=1;
    while(k!=0){
       a=k%10;
       k=k/10;
       n+=a;
       h=h*a;

    }
    // cout<<h;
    // cout<<n;
    cout<<h-n;
}    