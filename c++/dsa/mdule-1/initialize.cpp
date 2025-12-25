#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> v;
    vector<int> v1(n,0);
    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i];
    // }

    // v1.insert(pos,val)
    v1.insert(v1.begin()+1,1);

    replace(v1.begin(),v1.begin()+1,0,3);
    
    for(int i:v1){
        cout<<i<<" ";
    }


    return 0;
}