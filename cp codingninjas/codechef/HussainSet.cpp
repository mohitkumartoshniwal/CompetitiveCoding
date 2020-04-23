


//Q

//https://www.codechef.com/COOK82/problems/COOK82C

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    int n,m;
    cin>>n>>m;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    queue<ll> q;//common queue to store the elements
    
    int count_m=0;
    int end_p=n-1;//commom end_pointer which points to 
    //end of array since it will be the largest elments
    while(m--){
        int curr_m;
        cin>>curr_m;
        int ans;
        for(;count_m<curr_m;count_m++){//since m queries are in chronological order hence we can ...
            if(end_p>=0 && (q.empty() || arr[end_p]>=q.front())){
                ans=arr[end_p];
                end_p--;
            }
            else{
                ans=q.front();
                q.pop();
            }
            q.push(ans/2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
