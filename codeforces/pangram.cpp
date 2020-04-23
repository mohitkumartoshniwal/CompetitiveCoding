//http://codeforces.com/problemset/problem/520/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string given;
    cin >> given;

    bool map[26] = {0};
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (given[i] <= 'z' && given[i] >= 'a')
        {
            if (!map[given[i] - 'a'])
            {
                map[given[i] - 'a'] = true;
                counter++;
            }
        }
        else if (given[i] <= 'Z' && given[i] >= 'A')
        {
            if (!map[given[i] - 'A'])
            {
                map[given[i] - 'A'] = true;
                counter++;
            }
        }
    }
    if (counter == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}