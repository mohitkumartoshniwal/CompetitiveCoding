// C++ program for Naive Pattern 
// Searching algorithm 

//Dynamic Programming , storing 
#include<bits/stdc++.h> 
using namespace std; 

int lis(int* arr, int n){
    int* output=new int[n];
    output[0]=1;//the least lis ending at first index is of length 1
    for(int i=1;i<n;i++){
        output[i]=1;//min length of sub at index is 1
        for(int j=i-1;j>=0;j--){//start from one preceeding element
            if(arr[j]>arr[i]){
                continue;//if elem 4 is encountered before 3 then it is skipped
            }
            int possibleAns=output[j]+1;//add one to lis of index j
            if(possibleAns>output[i]){
                output[i]=possibleAns;//update the new lis for index i
            }
        }
    }
    int best=0;
    for(int i=0;i<n;i++){
        if(best<output[i]){
            best=output[i];
        }
    }
    
    
    delete[] output;
    return best;
}

// Driver Code 
int main() 
{ 
	int n;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	cout<<lis(arr,n);
	delete[] arr;
	return 0; 
} 

/*
input
7
4 3 9 7 6 8 20

output
4

 */