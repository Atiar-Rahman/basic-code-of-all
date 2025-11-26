#include<iostream>
using namespace std;

int main(){
    int val;
    cout<<"Enter an integer value: ";
    cin>>val;
    switch(val%2){
        case 0:
            cout<<"Even number"<<endl;
            break;
        case 1:
        case -1:
            cout<<"Odd number"<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
    }
    return 0;
}