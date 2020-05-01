//http://codeforces.com/problemset/problem/112/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string word, word2;
    cin >> word >> word2;
    int i = 0;
    bool flag = true;
    while (i < word.length())
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] += 32;
        }
        if (word2[i] >= 'A' && word2[i] <= 'Z')
        {
            word2[i] += 32;
        }
        if (word[i] < word2[i])
        {
            cout << -1 << endl;
            flag = false;
            break;
        }
        else if (word[i] > word2[i])
        {
            cout << 1 << endl;
            flag = false;
            break;
        }

        i++;
    }

    if (flag)
    {
        cout << 0 << endl;
    }

    return 0;
}
// or

/*
//4006999   Jul 3, 2013 6:34:23 PM	fuwutu	 112A - Petya and Strings	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout << strcmp(s1.c_str(), s2.c_str()) << endl;
    return 0;
}
*/

//OR

/*
#include <iostream>
#include <algorithm>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 92) {
            a[i] += 32;
        }
        if (b[i] < 92) {
            b[i] += 32;
        }
    }
    if (a < b) {
        cout << -1;
    } else if (a > b) {
        cout << 1;
    } else if (a == b) {
        cout << 0;
    }
}
*/