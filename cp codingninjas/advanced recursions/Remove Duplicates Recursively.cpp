/*
Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S
Output Format :
Output string
Constraints :
1 <= Length of String S <= 10^3
Sample Input :
aabccba
Sample Output :
abcba
*/

#include <iostream>
using namespace std;

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}

void removeConsecutiveDuplicates(char *s) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/

    if (s[0] == '\0') {
		return;
	}
    
    removeConsecutiveDuplicates(s+1);
    
    if(s[1]==s[0]){
        int i=1;
        for(;s[i] != '\0';i++){
            s[i-1]=s[i];
        }
        s[i-1]=s[i];//for'\0' character
    }
    else{
        return;
    }
    
    

}