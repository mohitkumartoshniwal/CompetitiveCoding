/*
You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.
Input

The first line of input contains one integer denoting N.

Next N lines contains two space separated integers denoting the start time and finish time for the ith activity.
Output

Output one integer, the maximum number of activities that can be performed

Constraints
1 ≤ N ≤ 10^6
1 ≤ ai, di ≤ 10^9
Sample Input

6
1 2
3 4
0 6
5 7
8 9
5 9

Sample Output

4


*/
#include<bits/stdc++.h>
using namespace std;

 void SelectActivities(vector<int>s,vector<int>f){ 
    vector<pair<int,int>>ans; 
  
// Minimum Priority Queue to sort activities in ascending order of finishing time (f[i]). 
  
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p; 
  
    for(int i=0;i<s.size();i++){ 
        // Pushing elements in priority queue where the key is f[i] 
        p.push(make_pair(f[i],s[i])); 
    } 
  
    auto it = p.top(); 
    int start = it.second; 
    int end = it.first; 
    p.pop(); 
    ans.push_back(make_pair(start,end)); 
  
    while(!p.empty()){ 
        auto itr = p.top(); 
        p.pop(); 
        if(itr.second >= end){ 
            start = itr.second; 
            end = itr.first; 
            ans.push_back(make_pair(start,end)); 
        } 
    } 
     cout<<ans.size();
   
} 
  

int main()
{
    //Write your code here
    int n;
    cin>>n;
    
     
	vector<int>s ; 
    vector<int>f; 
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a;
        cin>>b;
        s.push_back(a);
        f.push_back(b);
    }
     SelectActivities(s,f); 
  
    return 0;
}