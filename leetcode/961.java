//https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
    public int repeatedNTimes(int[] A) {
        HashMap<Integer,Integer> hm =new HashMap<Integer,Integer>();
        for(int i=0;i<A.length;i++){
            
                hm.put(A[i],hm.getOrDefault(A[i],0)+1);
            }
        
        for(int k:hm.keySet()){
            if(hm.get(k)>1){
                return k;
            }
        }
          
        
        return 0;
    }
    
}