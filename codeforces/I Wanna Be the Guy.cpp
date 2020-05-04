//https://codeforces.com/problemset/problem/469/A

//https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int mymap[n + 1] = {0};

    int p;
    cin >> p;

    int x[p];
    for (int i = 0; i < p; i++)
    {
        cin >> x[i];
        mymap[x[i]]++;
    }

    int q;
    cin >> q;

    int y[q];
    for (int i = 0; i < q; i++)
    {
        cin >> y[i];
        mymap[y[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (mymap[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";

    return 0;
}
