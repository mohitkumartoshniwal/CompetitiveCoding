//q 
//https://www.codechef.com/problems/VOTERS

#include<bits/stdc++.h>

using namespace std;



vector<int> getVoters(int arr[],int n){
    sort(arr,arr+n);//  1 1 2 2 3 4
    vector<int> voters;
    
    for(int i=0;i<n;){
        int count=0;
        int j=i;
        while(j<n && (arr[j]==arr[i])){
            count++;
            j++;
        }
        
        if(count>=2){
            voters.push_back(arr[i]);
            
        }
        i=j;//skip to next non repeated elem.
        
    }
    return voters;
}
int main()
{
    int l1,l2,l3;
    cin>>l1>>l2>>l3;
    
    int tot=l1+l2+l3;//create an array of all elems.
    
    int* arr=new int[tot];
    for(int i=0;i<tot;i++){
        cin>>arr[i];
    }
    
    vector<int> voters=getVoters(arr,tot);
    
    cout<<voters.size()<<endl;
    
    for(int i=0;i<voters.size();i++){
        cout<<voters[i]<<endl;
    }
    
    return 0;
}
