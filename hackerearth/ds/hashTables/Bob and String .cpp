//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/bob-and-string-easy/

//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/help-jarvis-8a39566e/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s,t;
        cin >> s>>t;
        int tot_count=0;

        int count[26];
         for(int i=0;i<26;i++){
            
            count[i]=0;
           
        }
        

        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
            
        }
        
          for(int i=0;i<t.length();i++){
            count[t[i]-'a']-=1;
            
        }
        
        

        for(int i=0;i<26;i++){
             if(count[i]>0)
                tot_count+=count[i];
            else if(count[i]<0)
                tot_count+=-count[i];
            
           
        }
        cout<<tot_count<<endl;

    }

       
        return 0;
    }