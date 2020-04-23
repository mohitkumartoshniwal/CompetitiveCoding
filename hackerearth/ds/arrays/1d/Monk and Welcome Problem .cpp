//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-welcome-problem/

/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;
 
int main(){

	int *n,*a,*b;
    int size=0;
    cin>>size;

	 n=new int[size];
	 a=new int[size];
	 b=new int[size];

	for(int i=0;i<size;i++){
		cin>>a[i];
	}

	for(int i=0;i<size;i++){
		cin>>b[i];
		cout<<a[i]+b[i]<<" ";
	}
	

	return 0;
}