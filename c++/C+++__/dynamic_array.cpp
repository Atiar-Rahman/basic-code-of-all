#include<bits/stdc++.h>
using namespace std;

int main(){
    int* arr = new int[10];

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    cout<<"print the result of array: ";
    for (int i=0; i<10; i++){
        cout<<" "<<arr[i];
    }

    return 0;
}