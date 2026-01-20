#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // char s[100];
    // cin.getline(s,100);
    int a;
    string s;
    cin>>a;
    cin.ignore();
    // cin>>s; // a>b; b<a > <
    getline(cin,s);
    cout<<s<<" "<<a<<"\n";


    return 0;
}