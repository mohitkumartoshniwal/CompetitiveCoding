#include<iostream>

#include<bits/stdc++.h>
using namespace std;

int makeSieve(int n){
    bool isprime[n+1];
    for(int i=0;i<=n;i++){
        isprime[i]=true;
        
    }
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]==true){
             for(int j=i*i;j<=n;j+=i){
            isprime[j]=false;
        }
            
        }
       
    }
    int count=0;
    for(int i=0;i<=n;i++){
       if(isprime[i]==true){
           count++;
       }
    }
    
   
    return count;
}
int main(){
	// Write your code here
    int n;
    cin>>n;
   int co=makeSieve(n);
    cout<<co;
	return 0;
}