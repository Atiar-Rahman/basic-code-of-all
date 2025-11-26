#include<bits/stdc++.h>
using namespace std;    


int main(){
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    if(str1 == str2){
        cout << "The strings are equal." << endl;
    } else if(str1 < str2){
        cout << "The first string is less than the second string." << endl;
    } else {
        cout << "The first string is greater than the second string." << endl;
    }

    return 0;   
}