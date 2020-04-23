//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/add-alternate-elements-of-2-dimensional-array/


#include <bits/stdc++.h>
using namespace std;

int main()
{

int a1=0,a2=0;
int arr[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                cin>>arr[i][j];
            if((i+j)%2==0){
                a1+=arr[i][j];
            }
            else{
                a2+=arr[i][j];
            }
        }
    }

    cout<<a1<<endl<<a2;

    return 0;

}