
//http://codeforces.com/problemset/problem/71/A

//http://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    string word;

    while (t--)
    {
        cin >> word;
        if (word.length() <= 10)
        {
            cout << word << endl;
        }
        else
        {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
    }

    return 0;
}
