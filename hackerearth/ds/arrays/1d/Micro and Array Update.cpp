//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/

// Write your code here
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    int n, k;
    cin>>t;

    while (t--)
    {

        int *arr;

        cin >> n >> k;
        //arr = new int[n];

        int min = INT_MAX;
        int N = n;
        int temp ;

/*
// Find the minimum element 
    cout << "\nMin Element = "
         << *min_element(arr, arr + n); 
*/


        while (N--)
        {
            cin >> temp;
            if (min > temp)
            {
                min = temp;
            }
        }
        
        if (min >= k)
            printf("0\n");
        else
            printf("%d\n", k - min);
    }

    return 0;
}