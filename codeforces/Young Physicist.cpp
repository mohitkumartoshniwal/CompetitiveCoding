//https://codeforces.com/problemset/problem/69/A

#include <iostream>

using namespace std;

int main()
{
    int n;
    int x, y, z;
    cin >> n;

    int x_tot = 0, y_tot = 0, z_tot = 0;

    while (n--)
    {
        cin >> x >> y >> z;
        x_tot += x;
        y_tot += y;
        z_tot += z;
    }

    if (x_tot != 0 || y_tot != 0 || z_tot != 0)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
