//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/roy-and-symmetric-logos-1/

#include <bits/stdc++.h>
using namespace std;


//IS it really needed?
// int * convertToInt(int n, int size)
// {

//     int *row = new int[size];
//     int i = 1;
//     while (n > 0)
//     {
//         row[size - i] = n % 10;
//         n / 10;
//         i++;
//     }

//     return row;
// }

bool validHorizontal(int **arr, int size)
{
    bool isMirror = true;
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size / 2; j++)
        {
            int k = size - 1 - j;
            if (arr[i][j] == 1 && arr[i][k] != 1)
            {
                isMirror = false;
                break;
            }else if (arr[i][j] ==  0 && arr[i][k] != 0)
            {
                isMirror = false;
                break;
            }
        }
    }

    return isMirror;
}

bool validVertical(int **arr, int size)
{
     bool isMirror = true;
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size / 2; j++)
        {
            int k = size - 1 - j;
            if (arr[j][i] == 1 && arr[k][i] != 1)
            {
                isMirror = false;
                break;
            }else if (arr[j][i] == 0 && arr[k][i] != 0)
            {
                isMirror = false;
                break;
            }
        }
    }

    return isMirror;
    
}
int main()
{

    int t, n;
    cin >> t;
    int **arr;

    while (t--)
    {
        cin >> n;
       // int row;
        arr = new int *[n];

        /*
        for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				scanf("%1d", &arr[i][j]);
			}
		}

        */

       for (int j = 0; j < n; j++) {
            string line;
            cin >> line;
            arr[j]=new int[n];
            for (int k = 0; k < line.size(); k++) {
                arr[j][k] = line[k] - '0';
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> row;
        //     arr[i] = convertToInt(row, n);
        // }

        if (validHorizontal(arr,n) && validVertical(arr,n ))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}