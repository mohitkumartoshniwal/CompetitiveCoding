//https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
    public boolean uniqueOccurrences(int[] arr) {
     
        HashMap<Integer,Integer> hm=new HashMap<Integer,Integer>();
        for(int a: arr){
            hm.put(a, 1+hm.getOrDefault(a,0));
        }
        
        return hm.size()==new HashSet<>(hm.values()).size();
    }
}