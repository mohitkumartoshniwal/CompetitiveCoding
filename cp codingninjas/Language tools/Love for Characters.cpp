/*
Ayush loves the characters ‘a’, ‘s’, and ‘p’. He got a string of lowercase letters and he wants to find out how many times characters ‘a’, ‘s’, and ‘p’ occurs in the string respectively. Help him find it out.
Input:
First line contains an integer denoting length of the string.
Next line contains the string.
Constraints:
1<=n<=10^5
‘a’<= each character of string <= ‘z’
Output:
Three space separated integers denoting the occurrence of letters ‘a’, ‘s’ and ‘p’ respectively.
Sample Input:
6
aabsas
Sample output:
3 2 0




*/

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<char,int> m;
    int n;
    cin>>n;
    string t;
    cin>>t;
    
//     for(int i=0;i<n;i++){
// 		m[t[i]] = m[t[i]]+1;
// 	}
    m.insert(pair<char,int>('a',0));
    
    m.insert(pair<char,int>('s',0));
    
    m.insert(pair<char,int>('p',0));
    for(int i=0;i<n;i++){
        if(t[i]=='a'){
            m[t[i]]+=1;
        }
        else  if(t[i]=='s'){
            m[t[i]]+=1;
        }
        else  if(t[i]=='p'){
            m[t[i]]+=1;
        }
    }
    
   
  
	
	cout<<m['a']<<" "<<m['s']<<" "<<m['p'];
	return 0;
}

