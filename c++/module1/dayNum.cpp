#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    switch(a){
        case 1:
            cout<<"saterday"<<endl;
            break;
        case 2: 
            cout<<"sunday"<<endl;
            break;
        default:
            cout<<"invalid number"<<endl;
    }

    return 0;
}