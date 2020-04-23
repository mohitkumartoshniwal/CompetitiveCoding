//https://leetcode.com/problems/remove-outermost-parentheses/

//https://www.youtube.com/watch?v=Evrdo1JEnmo

class Solution {
    public String removeOuterParentheses(String S) {
        
        int openbr=0,closebr=0;
        
        char ch[]=S.toCharArray();
        
        StringBuffer sb=new StringBuffer();
        for(char c:ch){
         
        switch(c)
            {
            case '(':
                openbr++;
                if(openbr!=1)
                sb.append(c);
                break;
        
            
            case ')':
                closebr++;
                if(openbr==closebr){
                    openbr=closebr=0;
                }
                else{
                    sb.append(c);
                }
            break;
            
        }
        }
        
        return sb.toString();
    }
}