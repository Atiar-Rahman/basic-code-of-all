#include<bits/stdc++.h>
using namespace std;

int main(){
  string s = "myname is md atiar rahman";
  cout<<s.size()<<endl;
  cout<<s.capacity()<<endl;
  cout<<s.max_size()<<endl;
  cout<<s.empty()<<endl;

  find(s.begin(),s.end(),'d');



    return 0;
}