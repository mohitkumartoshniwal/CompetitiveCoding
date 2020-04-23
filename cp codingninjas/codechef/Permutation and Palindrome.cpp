//Q https://www.codechef.com/FEB18/problems/PERMPAL


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char getChar(int i){
    return (char)(i+97);//a=97
    //returns ascii for characters a, b,.....
}

void printPalindromicSTring(string s){
    map<char,vector<int>> indexesMap;
    for(int i=0;i<s.length();i++){
        indexesMap[s[i]].push_back(i);
    }
    
    
    
    int odd_freq_count=0;
    for(int i=0;i<26;i++){
        if((indexesMap[getChar(i)].size()%2)!=0){
            odd_freq_count++;
        }
    }
    
    if(odd_freq_count>=2){
        cout<<"-1";//abba abbcbba palindrome possible with all even char
        //or one odd and other all even hence
        return;
    }
    
    int ans[s.length()];
    //abbcbba
    int start=0;//point to start 
    int end=s.length()-1;//point to end
    for(int i=0;i<26;i++){
        
        char current_char=getChar(i);
        for(int j=0;j<indexesMap[current_char].size();j+=2){
            //j+=2? because for suppose "a" vector is [0,3,5,7], 
            //start is at j=0 and we place 0 3 then increment by 2 then we place 5 7 
            if((indexesMap[current_char].size()-j)==1){
                //for one odd and other even suppose "a" vector is [0,3, 4 , 5, 7], then
                // we place 0 3 4 5 but left with 7 we can calculate size of vector -j(even) 
                //then we will place that 7 in middle since palindrome
                ans[s.length()/2]=indexesMap[current_char][j];
                continue;//skip the loop since middle will not be reached
                //since j+=2 and don't increment start and end
            }
            ans[start]=indexesMap[current_char][j];//get the j'th character in the vector at i'th of the map. 
            ans[end]=indexesMap[current_char][j+1];
            start++;
            end--;
        }
    }
    
    for(int i=0;i<s.length();i++){
        cout<<ans[i]+1<<" ";
        
    }
    return;
}

int main()
{
    
    int t;
    cin>>t;
    
    while(t--){
        string s;
        cin>>s;
        printPalindromicSTring(s);
        cout<<endl;
    }
   

    return 0;
}
