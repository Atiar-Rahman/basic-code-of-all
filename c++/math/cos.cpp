#include<bits/stdc++.h>
using namespace std;

int main() {
    double angle;
    cout << "Enter angle in radians: ";
    cin >> angle;

    double result = cos(angle*3.14159265358979323846/180.0);
    cout << "Cosine of " << angle << " radians is: " << result << endl;

    return 0;
}