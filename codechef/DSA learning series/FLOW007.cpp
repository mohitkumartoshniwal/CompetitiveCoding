//Reverse The Number 


#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    long no;
    while(t--){
        cin>>no;
       

        vector<int> number;
        while(no>0){
            number.push_back(no%10);
            no/=10;

        }

        //reverse
        long rev_no=0;
        for(int i=0;i<number.size();i++){
                rev_no=rev_no*10+number[i];
        }
        cout<<rev_no<<endl;

        
    }
    return 0;

}