#include<iostream>

using namespace std;
int main(){
    int k;
    cout<<"enter an integer: ";
    cin>>k;
    int j;
    j=k;
    // if (k<0){
    //     cout<<"invalid no"<<endl;

    // }
    int a=0;
    if (j==0) cout<<"false";
    while(j!=0 ){
        j=j%10;
        j /=10;
        
        a++;
    }
    if( a%2 == 0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

return 0;
}
