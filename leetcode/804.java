//https://leetcode.com/problems/unique-morse-code-words/

class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        
       String con[]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        String ans[]=new String[words.length];
        int j=0;
        for(String word:words){
            char str[]=word.toCharArray();
            
            for(int i=0;i<str.length;i++){
                ans[j]+=con[str[i]-'a'];
            }
            j++;
        }
        
        HashSet<String> hs=new HashSet<String>();
        
        for(String a:ans){
            hs.add(a);
        }
        return hs.size();
    }
}