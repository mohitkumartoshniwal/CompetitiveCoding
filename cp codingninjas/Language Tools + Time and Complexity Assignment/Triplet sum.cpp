/*

Given a random integer array and a number x. Find and print the triplets of elements in the array which sum to x.
While printing a triplet, print the smallest element first.
That is, if a valid triplet is (6, 5, 10) print "5 6 10". There is no constraint that out of 5 triplets which have to be printed on 1st line. You can print triplets in any order, just be careful about the order of elements in a triplet.
Input format :
Line 1 : Integer N (Array Size)
Line 2 : Array elements (separated by space)
Line 3 : Integer x
Output format :
Line 1 : Triplet 1 elements (separated by space)
Line 2 : Triplet 3 elements (separated by space)
Line 3 : and so on
Constraints :
1 <= N <= 1000
1 <= x <= 100
Sample Input:
7
1 2 3 4 5 6 7 
12
Sample Output ;
1 4 7
1 5 6
2 3 7
2 4 6
3 4 5

*/

// // arr - input array
// // size - size of array
// // x - sum of triplets
// #include<bits/stdc++.h>
// void FindTriplet(int arr[], int n, int sum) {
//     /* Don't write main().
//      * Don't read input, it is passed as function argument.
//      * Print output and don't return it.
//      * Taking input is handled automatically.
//      */
//  // sort array elements 
//     sort(arr, arr + n); 
  
//     for (int i = 0; i < n ; i++) { 
//         // initialize left and right 
//         int l = i + 1; 
//         int r = n - 1; 
//         int x = arr[i]; 
//         while (l < r) { 
//             if (x + arr[l] + arr[r] == sum) { 
//                 // print elements if it's sum is given sum. 
//                 printf("%d %d %d\n", x, arr[l], arr[r]); 
//                 l++; 
//                 r--; 
//             } 
  
//             // If sum of three elements is less 
//             // than 'sum' then increment in left 
//             else if (x + arr[l] + arr[r] < sum) 
//                 l++; 
  
//             // if sum is greater than given sum, then 
//             // decrement in right side 
//             else
//                 r--; 
//         } 
//     } 
// }



// arr - input array
// size - size of array
// x - sum of triplets
#include <bits/stdc++.h>
void FindTriplet(int arr[], int size, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
sort(arr, arr+size);
    
    for(int i=0;i<size;i++){
        int st = i+1;
        int end = size-1;
        int val = x-arr[i];
        while(st<end){
            if(arr[st]+arr[end]>val)
                end--;
            else if (arr[st]+arr[end]<val)
                st++;
            else{
                int count1=0, count2=0;
                for(int i=st;i<=end;i++){
                    if(arr[i]==arr[st])
                        count1++;
                    else
                        break;
                }
                for(int i=end;i>=st;i--){
                    if(arr[i]==arr[end])
                        count2++;
                    else
                        break;
                }
                int combinations=count1*count2;
                if(arr[st] == arr[end])
                    combinations = ((end-st+1)*(end-st))/2;
                for(int k=0;k<combinations;k++){
                    cout<<arr[i] << " " << arr[st]<<" "<<arr[end]<<endl;
                }
                st= st+count1;
                end=end-count2;
            }
        }
    }
}