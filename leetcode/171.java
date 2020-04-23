/*
Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
    ...

Example 1:

Input: "A"
Output: 1

Example 2:

Input: "AB"
Output: 28

Example 3:

Input: "ZY"
Output: 701


*/

class Solution {
    public int titleToNumber(String s) {
        
        int res=0;
        for(int i=0;i<s.length();i++){
            res*=26;
            res+=(s.charAt(i)-'A')+1;
            //ex:
            /*
            
            "A"=1
            "AB"=1*26+2
            
            "B" = 2
            "BC" = (2)26 + 3
            "BCM" = (2(26) + 3)26 + 13*/
        }
        return res;
        
    }
}