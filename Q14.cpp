#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans;
    int n;
    cout<<"enter the total sales quantity: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the sales value: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter threshold value: ";
    int t;
    cin>>t;
    cout<<endl;
    for(int j=0;j<n;j++){
       if( arr[j]>= t){
        ans.push_back(arr[j]);
       }
    }
    cout<<"sales value upper or equl to threshold: ";
    for(int val : ans){
        cout<<val<<" ";

    }
    cout<<endl;
    return 0;
}