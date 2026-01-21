#include<iostream>
using namespace std;

int main(){

    char s[100];
    // cin>>s; // space na thakle
    cin.ignore(); // space input na ney 
    cin.getline(s,100);// space thakle
    cout<<s;

    string ss;
    cin>>ss;
    cout<<ss<<endl;
}