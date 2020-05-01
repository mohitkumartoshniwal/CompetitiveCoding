//https://leetcode.com/explore/learn/card/binary-search/125/template-i/952/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        //https://leetcode.com/problems/search-in-rotated-sorted-array/discuss/14616/C%2B%2B-binary-search-with-comments-easy-to-read-and-understand
        
        //https://leetcode.com/problems/search-in-rotated-sorted-array/discuss/14425/Concise-O(log-N)-Binary-search-solution
        
        //https://leetcode.com/problems/search-in-rotated-sorted-array/discuss/14472/Java-AC-Solution-using-once-binary-search
        
        //https://leetcode.com/problems/search-in-rotated-sorted-array/discuss/14419/Pretty-short-C%2B%2BJavaRubyPython
        
        //first find the element
        int n=nums.size();
        int low=0,high=n-1;
        int mid;
        
        //find the index by the array is rotated
     while(low<high){
         mid=low+(high-low)/2;
         if(nums[mid]>nums[high])
             low=mid+1;
         else
             high=mid;
     }
        
        //get the index
        int rot=low;
        //cout<<rot<<endl;
        
        low=0,high=n-1;
        int realmid;
        //find actual mid for the original array using binary search
        while(low<=high){
         mid=low+(high-low)/2;
            realmid=(mid + rot)%n;
            
         if(nums[realmid]>target)
             high=mid-1;
         else if(nums[realmid]<target)
             low=mid+1;
            else
                return realmid;
     }
        
        
        return -1;
        
    }
};