#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cout<<"enter array size: ";
    cin>>n;
        vector<int>v(n);
        
        for(int &v1: v){
            cin>>v1;
        }
        int s;
        cout<<"enter start index: ";
        cin>>s;
        int a;
        cout<<"enter end index: ";
        cin>>a;
        while(s<a){
            swap(v[s],v[a]);
            s++;
            a--;
        }
        
         for(int v1: v){
            cout<<v1<<" ";
        }
        
        return 0;
}