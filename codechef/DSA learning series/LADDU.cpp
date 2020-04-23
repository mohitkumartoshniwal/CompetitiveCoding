/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int no_of_activities;
    string origin;
    while(t--){
        cin>>no_of_activities;
        cin>>origin;
        int contest_won;
        int BUG_FOUND;
        
        int laddu=0;
        while(no_of_activities--){
        string temp;
        cin>>temp;
        if(temp=="CONTEST_WON"){
            cin>>contest_won;
            if(contest_won<20){
                laddu+=20-contest_won;
            }
            laddu+=300;
        }
        else if(temp=="TOP_CONTRIBUTOR"){
            laddu+=300 ;
        }else if(temp=="BUG_FOUND"){
            cin>>BUG_FOUND;
            laddu+=BUG_FOUND;
        }else if(temp=="CONTEST_HOSTED"){
            laddu+=50;
        }
       
        }
         int res=0;
        if(origin=="INDIAN"){
            res=ceil(laddu/200);
        }else if(origin=="NON_INDIAN"){
            res=ceil(laddu/400);
        }
        // if(origin=="INDIAN"){
            
        // }
        
        cout<<res<<endl;
        
        }

    return 0;
}
