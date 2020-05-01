//http://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s, test = "hello";

    cin >> s;
    int j = 0;
    int nums = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == test[j])
        {
            nums++;
            j++;
        }
        if (nums == 5)
        {
            break;
        }
    }

    (nums == 5) ? cout << "YES" : cout << "NO";
    return 0;
}
