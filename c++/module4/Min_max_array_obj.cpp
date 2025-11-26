#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    float marks;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }

    // int mn = INT_MAX;

    // for (int i = 0; i < n; i++)
    // {
    //     mn = min(mn, (int)arr[i].marks);
    // }
    // cout << "Minimum marks: " << mn << endl;

    Student mn;
    mn.marks = FLT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks < mn.marks)
        {
            mn = arr[i];
        }
    }
    cout << "Minimum marks student details: " << endl;
    cout << "Name: " << mn.name << endl;
    cout << "Roll: " << mn.roll << endl;    
    cout << "Marks: " << mn.marks << endl;
    return 0;
}