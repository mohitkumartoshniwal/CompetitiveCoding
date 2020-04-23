/*

You are given an array of positive integers as input. Write a code to return the length of the largest such sub-array in which the values are arranged first in strictly ascending order and then in strictly descending order.
Such a sub-array is known as bitonic sub-array. A purely increasing or purely decreasing subsequence will also be considered as a bitonic sequence with the other part empty.
Note that the elements in bitonic sub-array need not be consecutive in the given array but the order should remain same.
Input Format:
Line 1 : A positive Integer N, i.e., the size of array
Line 2 : N space-separated integers as elements of the array 
Output Format:
Length of Largest Bitonic Sub-Array
Input Constraints:
1<= N <= 10^5
Sample Input 1:
6
15 20 20 6 4 2
Sample Output 1:
5
Sample Output 1 Explanation:
Here, longest Bitonic sub-array is {15, 20, 6, 4, 2} which has length = 5.
Sample Input 2:
2
1 5
Sample Output 2:
2
Sample Input 3:
2
5 1
Sample Output 3:
2
 */

#include<iostream>
using namespace std;
//#include "solution.h"

int main() {
  int n, input[100000];
  cin>>n;
  for(int i=0; i<n; i++) {
    cin>>input[i];
  }
  cout<<longestBitonicSubarray(input, n);
  return 0;
}

 	
	int longestBitonicSubarray(int *arr, int n) {
		
	/* Don't write main().
     	* the input is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
     	
     	 int* inc=new int[n];
    inc[0]=1;//the least lis ending at first index is of length 1
        
        int* dec=new int[n];
        dec[n-1]=1;
        
        //for increasing subarray
    for(int i=1;i<n;i++){
        inc[i]=1;//min length of sub at index is 1
        for(int j=i-1;j>=0;j--){//start from one preceeding element
            if(arr[j]>arr[i]){
                continue;//if elem 4 is encountered before 3 then it is skipped
            }
            else if(arr[j]<arr[i]){
                int possibleAns=inc[j]+1;//add one to lis of index j
            if(possibleAns>inc[i]){
                inc[i]=possibleAns;//update the new lis for index i
                
            }
            
            }
        }
    }
        
        //for decreasing subarray
        for(int i=n-2;i>=0;i--){
        dec[i]=1;//min length of sub at index is 1
        for(int j=i+1;j<n;j++){//start from one succeeding element
            if(arr[j]>arr[i]){
                continue;//if elem 4 is encountered after 3 then it is skipped
            }
            else if(arr[j]<arr[i]){
                int possibleAns=dec[j]+1;//add one to lis of index j
            if(possibleAns>dec[i]){
                dec[i]=possibleAns;//update the new lis for index i
                
            }
           
            }
        }
    }
        
          int max = inc[0] + dec[0] - 1;  //since index elem is repaeted twice
    for (int i = 1; i < n; i++)  
        if (inc[i] + dec[i] - 1 > max)  
            max = inc[i] + dec[i] - 1;  
  
    return max;  
     	
 	}

//Time complexity:O(n^2)
//Space complexity: O(n)
