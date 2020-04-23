//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/help-jarvis-8a39566e/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a[1000000], flag = 1;
        for (int i = 0; i < s.size(); i++)
        {
            //  cout<<"s "<<s[i]<<endl;

            a[i] = s[i] - 48;

            //  cout<<"a "<<a[i]<<endl;
        }

        sort(a,a+s.size());

        for(int i=1;i< s.size();i++){
            if(a[i]!=a[i-1]+1){
                flag=0;
                break;
            }
                
        }
        printf(flag==0 ? "NO\n":"YES\n");

    }

       
        return 0;
    }