//https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;
    getline(cin, line); //use cin to get a single line from input, ven if spaces are there in the line
                        // cout<<line<<endl;
    int n = line.length();
    unordered_set<char> hs;
    for (int i = 1; i < n - 1; i += 3)
    {
        //  cout<<line[i]<<" ";
        hs.insert(line[i]);
    }
    // cout<<endl;
    cout << hs.size();

    return 0;
}
