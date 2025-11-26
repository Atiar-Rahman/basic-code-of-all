#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if (a>b){
        cout<<a<<" is greater than " <<b<<endl;
    }else{
        cout << b << " is greater than " << a << endl;
    }
    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;

    // swap
    int temp=a;
    a=b;
    b=temp;

    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0; 
}