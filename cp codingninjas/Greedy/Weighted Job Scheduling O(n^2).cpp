/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

struct Job
{
  int start, finish, profit;
};

bool compare (Job a, Job b)
{
  return a.finish < b.finish;
}

int maxProfit (Job arr[], int n)
{
  sort (arr, arr + n, compare);//greedy

  int *dp = new int[n];//dp
//DP with greedy
  dp[0] = arr[0].profit;//0'th element's profit

//take a situation of a middle element then work out the below steps
  for (int i = 1; i < n; i++)
    {
      int including = arr[i].profit;//include the profit of that element
      int latestNonConfictingJob = -1;//last non conficting element before current element 
      for (int j = i - 1; j >= 0; j--)
	{
	  if (arr[j].finish <= arr[i].start)//latestNonConfictingJob's finish time should be<= current Job's
	    {
	      latestNonConfictingJob = j;//update latestNonConfictingJob with a job which follows contraints.
	      break;
	    }
	}
	if(latestNonConfictingJob!=-1){
	    //update  profit with including both current Job's profit and latestNonConfictingJob's profit 
	    including+=dp[latestNonConfictingJob];
	}
	
	dp[i]=max(including,dp[i-1]);
	//if suppose including currentJob gives less profit than discard it otherwise include it
    }
    int ans=dp[n-1];
    delete [] dp;
    return ans;
}

int main ()
{
    int n;
    cin>>n;
    Job* arr=new Job[n];
    for(int i=0;i<n;i++){
     cin>>arr[i].start;
        cin>>arr[i].finish;
        cin>>arr[i].profit;
    }
  cout << maxProfit(arr,n);

  return 0;
}
