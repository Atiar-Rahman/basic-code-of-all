#include <bits/stdc++.h>
using namespace std;

int prefixMaxSum(const vector<int> &a)
{
    int m = 0, total = 0;
    for (int x : a)
    {
        m = max(m, x);
        total += m;
    }
    return total;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int ans = prefixMaxSum(a); 

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(a[i], a[j]);
                int val = prefixMaxSum(a);
                ans = max(ans, val);
                swap(a[i], a[j]); 
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
