/*
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : The order of strings are not important.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

#include <string>
using namespace std;

string getChar(int n){
    if(n==2){
        return "abc";
    }
    if(n==3){
        return "def";
    }
    if(n==4){
        return "ghi";
    }
  if(n==5){
        return "jkl";
    }
    if(n==6){
        return "mno";
    }
    if(n==7){
        return "pqrs";
    }
    if(n==8){
        return "tuv";
    }
    if(n==9){
        return "wxyz";
    }
    return "";
}
int keypad(int n, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    
      if(n==0){
          output[0]="";//since 1 elem empty string hence return 1
           return 1;
           
       }
       //23

//take last digit instead of first digit for recursion because it will be difficult to get first no instead of last no
       int lastDigit=n%10;//3
    int smallNumber=n/10;//2
  
    int smallOutputSize=keypad(smallNumber,output);
    string options=getChar(lastDigit);
       //approach
       //we will copy the elements returned from recursion so that total copies are equal to options
       //then we will add the lastDigit to all the returned elements

       for(int i=0;i<options.length()-1;i++){//options-1 since we have already one returned copy
           for(int j=0;j<smallOutputSize;j++){
               output[j+(i+1)*smallOutputSize]=output[j];
               //(i+1)*smallOutputSize allows us to access the next element
               //where we have to copy the ith element
               //j+previous term above because it will allow us to iterate over all returned elements and get them copied
           }
       }
       //we add the options characters to the total output till now and get the final values
       int k=0;//to
       for(int i=0;i<options.length();i++){
           
           for(int j=0;j<smallOutputSize;j++){
                output[k]=output[k]+options[i];
               k++;
           }
         
          
       }
       
       
       
	return options.length() * smallOutputSize;// we return total size of elements
      
        
}

