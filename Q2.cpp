#include<iostream>
using namespace std;
int main(){
    int k,a,n;
    cout<<"enter a number: ";
    cin>>k;
    n=0;
    while(k!=0){
       a=k%10;
       k=k/10;
       n=n*10+a;

    }
    cout<<n*2;


}