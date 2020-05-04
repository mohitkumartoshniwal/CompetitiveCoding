//https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long EvenStartsFromHere = 0;
    //   long long a;
    long long res = 0;
    if (n % 2 == 0)
    { //even
        EvenStartsFromHere = ceil(n / 2) + 1;

        if (k < EvenStartsFromHere)
        {
            //2n-1
            res = 2 * k - 1;
        }
        else
        {
            //2n+2
            res = 2 * (k - EvenStartsFromHere) + 2;
        }

        cout << res;
    }
    else
    { //odd
        EvenStartsFromHere = ceil(n / 2) + 2;
        if (k < EvenStartsFromHere)
        {
            //2n-1
            res = 2 * k - 1;
        }
        else
        {
            //2n+2
            res = 2 * (k - EvenStartsFromHere) + 2;
        }

        cout << res;
    }
    return 0;
}
