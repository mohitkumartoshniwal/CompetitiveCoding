// Burger Time?
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=2708&mosmsg=Submission+received+with+ID+24918590

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string highway;

    while (n)
    {

        cin >> highway;

        int prevDrug, prevRest, lowest;

        prevDrug = prevRest = lowest = -1;

        bool restReached = false;
        bool drugReached = false;

        for (string::iterator it = highway.begin(); it != highway.end(); it++, prevDrug++, prevRest++)
        {

            if (*it == 'Z')
            {
                lowest = 0;
                break;
            }
            else if (*it == 'D')
            {

                if (restReached && (prevRest < lowest || lowest == -1))
                    lowest = prevRest;

                prevDrug = 0;
                drugReached = true;
            }
            else if (*it == 'R')
            {
                if (drugReached && (prevDrug < lowest || lowest == -1))
                    lowest = prevDrug;

                prevRest = 0;
                restReached = true;
            }
        }

        cout << lowest << endl;

        cin >> n;
    }
    return 0;
}
