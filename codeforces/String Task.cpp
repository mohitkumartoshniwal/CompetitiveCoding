// /http://codeforces.com/problemset/problem/118/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string word, res;
    cin >> word;
    for (char c : word)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += 32; //'a'-'A'
        }
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            res.append(1, '.');
            res.append(1, c);
        }
    }

    cout << res;

    return 0;
}
