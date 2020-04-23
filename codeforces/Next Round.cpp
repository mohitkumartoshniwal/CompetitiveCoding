//http://codeforces.com/contest/158/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    std::vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    //sort (ar.begin(), ar.end());
    int count = 0;
    for (int i = 0; i < n && ar[i] != 0 && (i < k || ar[i] == ar[i - 1]); i++)
        count++;

    cout << count;

    return 0;
}
