#include<bits/stdc++.h>
using namespace std;
bool isPerfectRoot(int x){
    long long sq = 1LL * x * x;
    return (sq <= 1000000000LL);
}
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int ctn=0,num=1;
    for(int j=0;j<n;j++){
        if(isPerfectRoot(num)){
            cout<<num<<" ";
            ctn++;
        }
        num++;
    }
    cout<<endl;
  }


    return 0;
}