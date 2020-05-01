//https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    vector<int> ar(m);

    for (int i = 0; i < m; i++)
        cin >> ar[i];

    sort(ar.begin(), ar.end());
    int ans = INT_MAX;

    for (int i = 0; i <= m - n; i++)
    {
        if (ans > ar[n + i - 1] - ar[i])
        {
            ans = ar[n + i - 1] - ar[i];
            //  cout<<ans<<" "<<ar[n+i-1]<<" "<<ar[i]<<"\n";
        }
    }

    cout << ans;

    return 0;
}
