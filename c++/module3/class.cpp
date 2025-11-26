#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main(){
    Student a;
    a.roll = 101;
    a.gpa = 3.75;
    strcpy(a.name, "Alice");


    cout << "Name: " << a.name << endl;
    cout << "Roll: " << a.roll << endl;
    cout << "GPA: " << a.gpa << endl;
    return 0;
}