#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "Hello, world";
    cout<<str1[1]<<endl; // Accessing character at index 1
    // str1[1] = 'a'; // Modifying character at index 1
    cout<<str1.at(1)<<endl; // Accessing character at index 1 using at()
    cout<<str1.front()<<endl; // Accessing first character
    cout<<str1.back()<<endl; // Accessing last character
}