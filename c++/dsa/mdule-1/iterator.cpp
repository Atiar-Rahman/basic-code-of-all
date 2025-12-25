#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    // vector<int>::iterator it  = find(v.begin(),v.end(),4);
    auto it = find(v.begin(),v.end(),1);
    if(it==v.end()){
        cout<<"Not found"<<endl;
    }else{
        cout<<"found"<<endl;

    }
    return 0;
}