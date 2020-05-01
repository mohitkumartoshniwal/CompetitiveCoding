//http://codeforces.com/problemset/problem/160/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    vector<int> nums(n, 0);

    int tot = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        tot += nums[i];
    }

    sort(nums.begin(), nums.end(), greater<int>());
    // for(int i:nums){
    //     cout<<i<<" ";
    // }

    int ans = 0;
    int maxi = 0;
    for (int i : nums)
    {
        if (maxi <= tot / 2)
        {
            maxi += i;
            ans++;
        }
    }

    cout << ans;
    return 0;
}
