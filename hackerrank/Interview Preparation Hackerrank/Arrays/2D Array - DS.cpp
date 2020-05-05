// /https://www.hackerrank.com/contests/tech-hatke-daily-placement-contest/challenges/2d-array/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr)
{

    int m = arr.size();
    int n = arr[0].size();

    int max_sum = INT_MIN;
    int sum = 0;

    for (int i = 1; i < m - 1; i++)
    {
        sum = 0;
        for (int j = 1; j < n - 1; j++)
        {
            sum = arr[i - 1][j] + arr[i][j] + arr[i + 1][j] + arr[i - 1][j - 1] + arr[i - 1][j + 1] + arr[i + 1][j - 1] + arr[i + 1][j + 1];
            cout << sum << " ";
            if (max_sum < sum)
            {
                max_sum = sum;
            }
        }

        cout << endl;
    }
    return max_sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
