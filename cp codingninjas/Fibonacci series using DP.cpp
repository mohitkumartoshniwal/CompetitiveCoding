//Fibonacci Series using Dynamic Programming 
#include<stdio.h> 
#include<bits/stdc++.h>
using namespace std;
  
int fib(int n) { 
  /* Declare an array to store Fibonacci numbers. */
  int f[n+1];   // 1 extra to handle case, n = 0 
  int i; 
  
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      /* Add the previous 2 numbers in the series 
         and store it */
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 

int fib2(int n,int* arr){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(arr[n]>0){
        return arr[n];
    }
    
    int output=fib2(n-1,arr)+fib2(n-2,arr);
    arr[n]=output;
    return output;
    
}
  
int main () 
{ 
  int n ; 
  cin>>n;
  int* arr=new int[n+1];
  
  cout<<fib(n)<<endl;
  cout<<fib2(n,arr);
  
  return 0; 
} 