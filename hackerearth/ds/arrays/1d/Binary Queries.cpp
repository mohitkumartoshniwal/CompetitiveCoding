//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/range-query-2/


#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n,q;
    cin>>n>>q;
 
    int* ar;
    ar=new int[n+1];
 
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
 
    while(q--){
        const int forQuery1=0,forQuery2=1;
        int type=0;
        cin>>type;
        if(type==0){
            int left,right;
            cin>>left>>right;
 
            printf(ar[right]==1?"ODD\n":"EVEN\n");
 
        }
        else{
            int bit=0;
            cin>>bit;
            ar[bit]^=1;
        }
    }
 
    
 
}
 s