//https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
    public int[] sortedSquares(int[] A) {
        int ans[]=new int[A.length];
        
        int i=0;
        int j=A.length-1;
        
        int z=A.length-1;
        
        while(i<=j){
            if(Math.abs(A[i])>= Math.abs(A[j])){
                ans[z]=A[i]*A[i];
                i++;
            }
            else {
                ans[z]=A[j]*A[j];
                j--;
            }
            z--;
        }
        return ans;
    }
    
}