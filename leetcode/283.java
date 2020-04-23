//https://leetcode.com/problems/move-zeroes/

class Solution {
    public void moveZeroes(int[] nums) {
       
        int index=0;
        for(int num:nums){
            if(num!=0){
                nums[index]=num;
                index++;
            }
        }
        
        while(index<nums.length){
            nums[index++]=0;
        }
    }
  //another way
    /*
    public void moveZeroes(int[] nums) {

    int j = 0;
    for(int i = 0; i < nums.length; i++) {
        if(nums[i] != 0) {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            j++;
        }
    }
}
*/
}