#include <bits/stdc++.h>
using namespace std;

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

        unordered_set<int> s(a.begin(), a.end());

        int ans = 0;

        for (int m = n + 1; m >= 0; m--)
        {
            bool found = false;

            for (int i = 0; i < n; i++)
            {
                int x = -a[i];
                bool ok = true;
                for (int k = 0; k < m; k++)
                {
                    if (s.find(k + a[i]) == s.end())
                    {
                        ok = false;
                        break;
                    }
                }

                if (ok)
                {
                    found = true;
                    break;
                }
            }

            if (found)
            {
                ans = m;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
