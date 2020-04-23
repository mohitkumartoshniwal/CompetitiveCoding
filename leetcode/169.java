//https://leetcode.com/problems/majority-element/

class Solution {
    public int majorityElement(int[] nums) {
        int l=nums.length;
        
        HashMap<Integer,Integer> hm=new HashMap<Integer,Integer> ();
        
        for(int i=0;i<l;i++){
            if(hm.containsKey(nums[i])){
                if(hm.get(nums[i])>=l/2){
                    return nums[i];
                }
                hm.replace(nums[i],hm.get(nums[i])+1);
            }
            else{
                hm.put(nums[i],1);
            }
        }
        return nums[0];
    }
}