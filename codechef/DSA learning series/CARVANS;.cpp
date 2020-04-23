// /Carvans

#include <bits/stdc++.h>
using namespace std;

void fastscan(int &x)
{
    bool neg = false;
    register int c;
    x = 0;
    c = getchar();
    if (c == '-')
    {
        neg = true;
        c = getchar();
    }
    for (; (c > 47 && c < 58); c = getchar())
        x = (x << 1) + (x << 3) + c - 48;
    if (neg)
        x *= -1;
}
#define gc getchar_unlocked

void inline scanint(int *x)
{
    register int c = gc();
    *x = 0;
    for (; (c < 48 || c > 57); c = gc())
        ;
    for (; c > 47 && c < 58; c = gc())
    {
        *x = (*x << 1) + (*x << 3) + c - 48;
    }
}
int main()
{
    // your code goes here
    int t;

    //

    fastscan(t);
    while (t--)
    {
        int n;
        fastscan(n);
        vector<int> cars(n, 0);
        int var;
        if (n == 1)
        {
            fastscan(var);
            printf("1 \n");
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            fastscan(var);
            cars[i] = var;
        }

        // for(int i=0;i<n;i++){
        //     cout<<cars[i]<<" ";
        // }
        int minspeed = cars[0], finalCount = 1;
        for (int i = 1; i < n; i++)
        {
            if (cars[i] <= minspeed)
            {
                finalCount++;
                minspeed = min(minspeed, cars[i]);
            }
        }

        printf("%d \n", finalCount);
    }
    return 0;
}
