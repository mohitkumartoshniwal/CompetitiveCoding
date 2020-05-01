//http://codeforces.com/problemset/problem/451/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if ((n + m) % 2 == 1)
    {
        int res = min(n, m);
        if (res % 2 == 1)
            cout << "Akshat";
        else
            cout << "Malvika";
    }

    else
    {
        if (n % 2 == 1 && m % 2 == 1)
            cout << "Akshat";
        else
            cout << "Malvika";
    }

    return 0;
}
