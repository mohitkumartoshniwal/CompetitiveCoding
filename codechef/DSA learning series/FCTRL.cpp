//Factorial

//very helpful article

//https://brilliant.org/wiki/trailing-number-of-zeros/

#include <bits/stdc++.h>
using namespace std;

static long long solve(long long n)
{
    if (n == 0)
        return 0;

    return n / 5 + solve(n / 5);
}
int main()
{
    // your code goes here
    long long t;

    //

    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long no = n;
        long long res = 0;
        int i = 1;
        // while(1){//runtime error
        //     if(n< (ceil((n/pow(5,i)))))
        //             break;
        //     res+= ceil(n/pow(5,i));
        //     i++;
        // }

        res = solve(n);

        cout << res << endl;
    }

    return 0;
}
