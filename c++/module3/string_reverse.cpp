#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1; // Default constructor
    string s2("Hello, World!"); // C-string constructor
    string s3 = "C++17 is great!"; // Assignment from string literal    
    cout << "s1: " << s1 << endl;
    int a = 34;
    if(a > 0) {
        cout << "Positive number" << endl;
    } else {
        cout << "Non-positive number" << endl;
    }
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    return 0;
}