/*
Given a random integer array A of size N. Find and print the pair of elements in the array which sum to 0.
Array A can contain duplicate elements.
While printing a pair, print the smaller element first.
That is, if a valid pair is (6, -6) print "-6 6". There is no constraint that out of 5 pairs which have to be printed in 1st line. You can print pairs in any order, just be careful about the order of elements in a pair.
Input format :
Line 1 : Integer N (Array size)
Line 2 : Array elements (separated by space)
Output format :
Line 1 : Pair 1 elements (separated by space)
Line 2 : Pair 2 elements (separated by space)
Line 3 : and so on
Constraints :
1 <= N <= 10^6
Ai contains all non-zero values
Sample Input:
5
2 1 -2 2 3
Sample Output :
-2 2
-2 2
*/

#include<iostream>
using namespace std;
#include "solution.h"

int main()
{
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    PairSum(arr, n);
    return 0;
}

 #include<bits/stdc++.h>
	void PairSum(int *arr, int n) {	 
		
	/* Don't write main().
     	* the input array is already passed as function argument.
     	* Don't need to return anything. Print the desired pairs in the function itself.
     	*/
     	// Store counts of all elements in map m 
    unordered_map<int, int> m; 
  
    // Traverse through all elements 
    for (int i = 0; i < n; i++) { 
  
        // Search if a pair can be formed with 
        // arr[i]. 
        int rem =  -arr[i]; 
        if (m.find(rem) != m.end()) { 
            int count = m[rem]; 
            for (int j = 0; j < count; j++) {
                if(rem<arr[i]){
                    cout << rem <<" "<< arr[i] <<endl; 
                    
                }
                else{
                     cout << arr[i] <<" "<< rem <<endl; 
                }
            }
                
        } 
        m[arr[i]]++; 
    } 
     	
     	
 	}

