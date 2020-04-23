// /https://leetcode.com/explore/interview/card/top-interview-questions-medium/103/array-and-strings/776/
/*
//https://leetcode.com/problems/3sum/
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]

*/
//two pointer

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
       sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (unsigned int i=0; i<nums.size(); i++) {
        if ((i>0) && (nums[i]==nums[i-1]))
            continue;
        int l = i+1, r = nums.size()-1;
        while (l<r) {
            int s = nums[i]+nums[l]+nums[r];
            if (s>0) r--;
            else if (s<0) l++;
            else {
                res.push_back(vector<int> {nums[i], nums[l], nums[r]});
                while (l<r && nums[l]==nums[l+1]) l++;
                while (l<r && nums[r]==nums[r-1]) r--;
                l++; r--;
            }
        }
    }
    return res;
        
    }
};


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> res;
        
        if(nums.empty())
            return res;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){//why not size-2?
            
           
            int front=i+1;
            int back=nums.size()-1;
            
            //since array is sorted then if first element >0 then sum 0 is not possible
             if(nums[i]>0) break;
            
            
            //skipping first duplicate number
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            
            while(front<back){
                
                if (nums[back] < 0)
                    break;
                
                int sum=nums[front]+nums[back]+nums[i];
                if(sum<0){
                    front++;
                }
                else if(sum> 0){
                    back--;
                }
                else{
                   //sum=0
                    res.push_back({nums[i],nums[front],nums[back]});
                    int last_left=nums[front];
                    int last_right=nums[back];
                    
                     //skipping  duplicate numbers
                    while(front<back && nums[front]==last_left) front++;
                    while(front<back && nums[back]==last_right) back--;
                    
                   
                    
                    
                }
                
            }
            
            
        }
        
        return res;
        
    }
};