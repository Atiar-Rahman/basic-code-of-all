#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> a(n);
        vector<int> len(n);

        for (int i = 0; i < n; i++)
        {
            cin >> len[i];
            a[i].resize(len[i]);
            for (int j = 0; j < len[i]; j++)
            {
                cin >> a[i][j];
            }
        }

        vector<int> mex(n);
        vector<unordered_map<int, int>> cnt(n);

        // Compute mex and count
        for (int i = 0; i < n; i++)
        {
            unordered_set<int> st;
            for (int x : a[i])
                st.insert(x);

            int m = 0;
            while (st.count(m))
                m++;
            mex[i] = m;

            for (int x : a[i])
            {
                if (x <= mex[i])
                    cnt[i][x]++;
            }
        }

        long long sumMex = 0;
        for (int i = 0; i < n; i++)
            sumMex += mex[i];

        long long totalOps = 0;
        for (int i = 0; i < n; i++)
            totalOps += 1LL * len[i] * (n - 1);

        long long ans = sumMex * totalOps;

        // ---------- Source array contribution ----------
        for (int i = 0; i < n; i++)
        {
            for (auto &p : cnt[i])
            {
                int x = p.first;
                int c = p.second;
                if (x < mex[i] && c == 1)
                {
                    long long loss = mex[i] - x;
                    ans -= loss * (n - 1);
                }
            }
        }

        // ---------- Destination array contribution ----------
        unordered_map<int, long long> freqMex;
        for (int i = 0; i < n; i++)
        {
            freqMex[mex[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            for (int x : a[i])
            {
                if (freqMex.count(x))
                {
                    ans += freqMex[x];
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
