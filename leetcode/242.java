//https://leetcode.com/problems/valid-anagram/

class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character, Integer> hm=new HashMap<Character, Integer>();
        
        for(int i=0;i<s.length();i++){
            if(hm.containsKey(s.charAt(i))){
                hm.put(s.charAt(i),hm.get(s.charAt(i))+1);
            }
            else{
                hm.put(s.charAt(i),1);
            }
        }
         for(int i=0;i<t.length();i++){
            if(hm.containsKey(t.charAt(i))){
                hm.put(t.charAt(i),hm.get(t.charAt(i))-1);
            }
             else{
                 hm.put(t.charAt(i),1);
             }
        }
        
        for(Integer ch:hm.values()){
            if(ch>0){
                return false;
            }
        }
        return true;
        
        
    }
}