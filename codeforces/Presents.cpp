//http://codeforces.com/problemset/problem/136/A

//trucky wording

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b;
    cin >> n;
    int mas[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> b;
        mas[b] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << mas[i] << " ";
    }
    return 0;
}
