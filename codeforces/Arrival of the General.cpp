//http://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a;
    int mini(0), maxi(0), minV(a), maxV(a);

    for (int i = 1; i < n; i++)
    {
        cin >> b;
        if (minV >= b)
        {
            minV = b;
            mini = i;
        }
        else if (maxV < b)
        {
            maxV = b;
            maxi = i;
        }
    }

    // if(maxV==a){
    //     maxi=0;
    // }
    // if(minV==b){
    //     mini=n-1;
    // }
    //cout << mini << " " << maxi << endl;

    cout << maxi + (n - mini - 1) - (mini < maxi ? 1 : 0);

    return 0;
}
