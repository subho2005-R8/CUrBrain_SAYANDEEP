#include<iostream>
using namespace std;
int main(){
    int k,n;
    cout<<"enter positive number: ";
    cin>>k;
    int u=0;
    n=0;
    int h;
    h=1;
    while(k!=0){
        int a;
       a=k%10;
       k=k/10;
       
       if(a%2 == 0){
        a=0;
       }
       n=n*10+a;

    }
     while(n!=0){
        int a;
       a=n%10;
       n=n/10;
       
       
       u=u*10+a;
        cout<<a<<",";
    }
    
    
}    