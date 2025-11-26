#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "Hello";

    for (int i=0,j=str1.length()-1;i<str1.size();i++,j--){
        swap(str1[i], str1[j]);
    }

    cout << "Reversed string: " << str1 << endl;

    return 0;
}