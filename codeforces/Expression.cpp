//http://codeforces.com/problemset/problem/479/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans = INT_MIN;
    ans = max(ans, a * b * c);
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    ans = max(ans, a + (b + c));

    cout << ans;

    return 0;
}
