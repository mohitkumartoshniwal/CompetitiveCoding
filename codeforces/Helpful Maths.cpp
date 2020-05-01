
//http://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string input;

    vector<int> nums;

    cin >> input;

    for (int i = 0; i < input.length(); i += 2)
    {
        nums.push_back(input[i] - '0');
    }

    sort(nums.begin(), nums.end());
    cout << nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        cout << "+" << nums[i];
    }

    return 0;
}
