//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/balanced-brackets-3-4fc590c6/



#include <bits/stdc++.h>
using namespace std;

string isBalanced(string current_row){
    
    stack<char> ar;
    bool isBalanced=true;
    for(int i=0;i<current_row.length();i++){
            

            if(current_row[i]=='(' || current_row[i]=='[' || current_row[i]=='{'){
                ar.push(current_row[i]);
                continue;
            }
            else if(ar.empty()){
                return "NO";
            }
            else if(current_row[i]==')' ){
             ///   if( ar.empty() || ar.top()!='('){//either check once or check in all
                if(ar.top()!='('){
                    return "NO";
                }
                ar.pop();
            }
            else if(current_row[i]==']' ){
                 if(ar.top()!='['){
                    return "NO";
                }
                ar.pop();
            }
            else if(current_row[i]=='}' ){
                 if(  ar.top()!='{'){
                    return "NO";
                }
                ar.pop();
            }
            // else
            // {
            //  //   cout<<"called ";
            //     return "NO";
                
            // }
            

        }
        
       if(!ar.empty()){
            return "NO";
       }
       return "YES";
}

int main()
{

    int t;
    cin>>t;

    
    string current_row;
     
  
    while(t--){
        cin>>current_row;
        cout<<isBalanced(current_row)<<endl;
        //some silly error while writing from here
        //so made a method
        //
        

        
        // while(!ar.empty()){
           
        //     char x=ar.top(); 
        //     ar.pop();
        //     cout<<x<<" ";

        // }
        //cout<<endl;
     //   cout<<ar.empty()<<endl;
     

    }

   

    return 0;

}