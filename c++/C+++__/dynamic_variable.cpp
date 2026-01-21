#include<bits/stdc++.h>
using namespace std;
int* p;
void fun(){
    int* x = new int;
    *x = 100;
    p=x;
    return;
}

int main(){
    // int x=10;
    // int* X = new int();
    // *X=100;
    // cout<<X<<endl;//memory address ke payo zay
    // //value paite dereference kore print korte hoy.

    fun();
    cout<<*p<<endl;


    return 0;
}