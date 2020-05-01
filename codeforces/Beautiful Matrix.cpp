//http://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, val;
    for (i = 1; i < 6; i++)
    {
        for (j = 1; j < 6; j++)
        {
            cin >> val;

            if (val == 1)
                break;
        }
        if (val == 1)
            break;
    }
    //	cout<<i<<" "<<j;
    cout << abs(i - 3) + abs(j - 3);

    return 0;
}
