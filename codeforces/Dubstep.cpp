// http://codeforces.com/problemset/problem/208/A

#include <iostream>

using namespace std;

int main()
{
    string song;
    cin >> song;

    for (int i = 0; i < song.length(); i++)
    {
        if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B')
        {
            // song.replace((size_t)i,3," ");
            song.replace(i, 3, " ");
            i = -1;
        }
    }

    for (int i = 0; i < song.length(); i++)
    {
        if ((song[i] == ' ' && i == 0) || (song[i] == ' ' && i == song.length() - 1) || (song[i] == ' ' && song[i + 1] == ' '))
        {

            //song.erase((size_t)i,1);
            song.erase(i, 1);
        }
    }

    cout << song;

    return 0;
}
