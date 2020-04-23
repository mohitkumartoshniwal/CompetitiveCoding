//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2726

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b;
    scanf("%d %d", &b, &n);
    int owes[21];

    while (b)
    {

        for (int i = 1; i <= b; i++)
        {
            scanf("%d", &owes[i]);
        }

        while (n--)
        {
            int d, c, v;
            scanf("%d %d %d", &d, &c, &v);

            owes[d] -= v;
            owes[c] += v;
        }

        bool flag = true;

        for (int i = 1; i <= b; i++)
        {
            if (owes[i] < 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            printf("S\n");
        else
            printf("N\n");

        scanf("%d %d", &b, &n);
    }
    return 0;
}
