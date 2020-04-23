/*
Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,...,xN (0 <= xi <= 1,000,000,000).
His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?
Input
t – the number of test cases, then t test cases follows. 
* Line 1: Two space-separated integers: N and C
* Lines 2..N+1: Line i+1 contains an integer stall location, xi
Output
For each test case output one integer: the largest minimum distance.
Sample Input :
1
5 3
1
2
8
4
9
Sample Output:
3 
Output details:
FJ can put his 3 cows in the stalls at positions 1, 4 and 8, 
resulting in a minimum distance of 3.
*/

#include<bits/stdc++.h>
using namespace std;

bool check(int cows,long long positions[],int n,long long distance){

	int count = 1;///default for 1st cow
	long long last_position = positions[0];

	for(int i=1;i<n;i++){
		if(positions[i] - last_position >= distance){
			last_position = positions[i];
			count++;
		}

		if(count == cows){
			return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,c;
		cin >> n >> c;

         //we use long long since in w=question distance is quite large
		long long positions[n];
		for(int i=0;i<n;i++){
			cin >> positions[i];
		}
        
        //we sort the array so that largest distance stall is at end position
		sort(positions,positions+n);
        
        
         //logic:
       //we create start and end
       //end is equal to maximum distance possible i.e last element - first element's distance
       //we then check for d=0,....till d reaches last POSSIBLE value this is not possible since
        //it will become O(n*d) which is very huge(see question)
        
       
       //above logic might not work since d is very huge so
        //we can use binary serach methdology in it so that it becomes O(nlogd) 
		long long start = 0;
		long long end = positions[n-1] - positions[0];

		long long ans = -1;//default ans

		while(start<=end){//we will continue till 
			long long mid = start + (end-start)/2;///we  calculate mid this way because of long long addition 
            //might exceed boundary

			if(check(c,positions,n,mid)){
                //if we can arrange n cows in mid position thn it becomes largest min. distance
                //but we should check for elements more then mid since we can get more largest min.distance
                
				ans = mid;
				start = mid+1;//we update start since more largest min. distance is available in sceond part of array
                
			}else{
				end = mid-1;//otherwise it might be present in first part of array
			}

		}
		cout << ans <<endl;
	}

	return 0;
}