/*
Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
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

    printKeypad(num);

    return 0;
}

#include <iostream>
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



void printkeypadHelper(int n,string output){
    
    if(n==0){
        cout<<output<<endl;
        return;
    }
    
    int lastDigit=n%10;
    int smallNum=n/10;
    string options=getChar(lastDigit);
    
    
    for(int i=0;i<options.length();i++){
        //similar approach to Return Keypad Approach.cpp
//but we call recursively
        printkeypadHelper(smallNum,options[i]+ output );
    }
    
}

void printKeypad(int n){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */  printkeypadHelper(n,"");
}



