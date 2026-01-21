#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<ll> sorted = a;
        sort(sorted.begin(), sorted.end());

        vector<ll> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
            pref[i + 1] = pref[i] + sorted[i];

        for (int i = 0; i < n; i++)
        {
            ll power = a[i];

            int lo = 0, hi = n - 1, best = 0;
            while (lo <= hi)
            {
                int mid = (lo + hi) / 2;

                ll total = pref[mid];
                int cheats_needed = 0;

                if (sorted[mid] > power)
                    cheats_needed = mid;

                if (cheats_needed <= k)
                    best = mid, lo = mid + 1;
                else
                    hi = mid - 1;
            }

            cout << min(n, best + 1) << " ";
        }
        cout << "\n";
    }
    return 0;
}
