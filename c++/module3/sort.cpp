#include<bits/stdc++.h>
using namespace std; 

int main(){
    vector<int> arr = {5, 2, 9, 1, 5, 6};

    // Sorting the array in ascending order
    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}