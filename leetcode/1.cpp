/*
Two Sum
Easy

https://leetcode.com/problems/two-sum/

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int> hm;
        
        vector<int> res;
        
        for(int i=0;i<nums.size();i++){
            if(hm.find(target-nums[i])!=hm.end()){
                
                res.push_back(i);
                res.push_back(hm[target-nums[i]]);
                return res;
            }   
                
            hm[nums[i]]=i;
        }
        
        return res ;
    }
};
