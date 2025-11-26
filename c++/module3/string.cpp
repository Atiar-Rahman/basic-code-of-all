#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    s = "Hello, World!";

    cout<<s<<endl;
    int ctn=0;
    for(char c : s){
        if(c == 'o'){
            ctn++;
        }
    }
    cout<<"Number of 'o': "<<ctn<<endl;
    return 0;
}