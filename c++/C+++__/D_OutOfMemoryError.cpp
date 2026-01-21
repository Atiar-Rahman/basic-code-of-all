#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        long long h;
        cin >> n >> m >> h;
        vector<long long> original(n);
        for (int i = 0; i < n; i++)
            cin >> original[i];

        vector<long long> current = original;

        for (int i = 0; i < m; i++)
        {
            int b;
            long long c;
            cin >> b >> c;
            b--; 

            current[b] += c;

            if (current[b] > h)
            {
                current = original; 
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << current[i] << (i == n - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
