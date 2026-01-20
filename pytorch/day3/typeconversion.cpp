#include<iostream>
using namespace std;

int main(){
    float a = 3.45;
    int v = 34;
    cout<<int(a)<<endl;
    cout<<float(v)<<endl;
    cout<<typeid(float(v)).name()<<endl;
    string s="1234";
    cout<<stoi(s)<<endl;
    return 0;
}