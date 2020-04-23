//https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/879/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        
        for(int i=0,j=n-1;i<ceil(n/2);i++,j--){
        char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            
        }
        
    }
};