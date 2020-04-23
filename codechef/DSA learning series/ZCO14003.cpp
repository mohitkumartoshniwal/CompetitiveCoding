//Smart Phone




#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main()
{

    long n;
    cin>>n;

    long a[n];
    FOR(i,0,n){
        cin>>a[i];
    }

    sort(a,a+n);

    long res=LONG_MIN;
    FOR(i,0,n){
        long val=a[i]*(n-i);
        if(res<val){
            res=val;
        }
    }
    cout<<res<<endl;

    return 0;

}