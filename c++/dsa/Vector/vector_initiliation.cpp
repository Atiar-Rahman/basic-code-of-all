#include<bits/stdc++.h>
using namespace std;

int main(){
    // stl = standard template library
  vector<int> v; //type 1
  vector<int> v1(10); //type2
  vector<int> v2(10,-1); // type 3
  vector<int> v3(v1); // type  4
  int a[5] = {5,6,7,8,5};
  vector<int> v4(a,a+5); // type 5
  vector<int> v5 = {1,2,3,4,5,6};

  for(int i=0;i<6;i++){
    cout<<v5[i]<<" ";
  }



    return 0;
}