//http://codeforces.com/problemset/problem/621/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    ll sum = 0;
    ll oddnum = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += arr[i];
        if (arr[i] % 2 == 1)
        {
            oddnum = min(oddnum, arr[i]);
        }
    }

    if (sum % 2 == 1)
    {
        sum -= oddnum;
    }

    cout << sum;

    return 0;
}