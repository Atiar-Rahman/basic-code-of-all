#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
//   cout<<v.capacity();
// cout<<v.size();
// cout<<v.max_size();
// v.clear();
// cout<<v.size();
// cout<<v[0];
// cout<<v.empty();
// v.resize(2);//decrease
v.resize(7,100);//increase
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}



    return 0;
}