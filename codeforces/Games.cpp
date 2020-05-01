
//http://codeforces.com/problemset/problem/268/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, g;
    cin >> n;

    vector<int> h(n);
    unordered_map<int, int> hm;

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        cin >> g;

        if (hm.find(g) != hm.end())
        {
            hm[g]++;
        }
        else
        {
            hm[g] = 1;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (hm.find(h[i]) != hm.end())
            count += hm[h[i]];
    }

    cout << count;
    return 0;
}
