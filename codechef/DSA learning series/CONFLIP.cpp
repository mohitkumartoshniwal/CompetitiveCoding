//Coin Flip

//explanation
//https://discuss.codechef.com/t/conflip-editorial/866

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, g, i, q;
    long int n;

    //

    cin >> t;
    while (t--)
    {
        cin >> g;
        while (g--)
        {
            cin >> i >> n >> q;

            if (n % 2 == 0 || i == q)
                cout << n / 2 << endl;
            else
                cout << n / 2 + 1 << endl;
        }
    }

    return 0;
}
