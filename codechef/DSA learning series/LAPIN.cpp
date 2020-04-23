//Lapindromes

#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int main()
{

    int t;
    cin >> t;
    string row;
    ;
    while (t--)
    {
        cin >> row;
        int a[26], b[26];

        FOR(i, 0, 26)
        {
            a[i] = b[i] = 0;
        }

        for (int i = 0, j = row.size() - 1; i < row.size() / 2; i++, j--)
        {
            a[row[i] - 'a']++;
            b[row[j] - 'a']++;
        }

        bool f = true;
        FOR(i, 0, 26)
        {
            if (a[i] != b[i])
            {
                f = false;
                break;
            }
        }

        printf(f ? "YES\n" : "NO\n");
    }
    return 0;
}