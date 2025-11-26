#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello, World!";
    string s1(s); // Copy constructor
    string s2(5, 'A'); // Fill constructor
    string s3(s.begin(), s.end()); // Range constructor
}