//http://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string res = "";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            res += "I love";
        }
        else
        {
            res += "I hate";
        }
        if (i != n)
        {
            res += " that ";
        }
        else
        {
            res += " it";
        }
    }

    cout << res;

    return 0;
}