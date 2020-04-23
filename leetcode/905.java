//https://leetcode.com/problems/sort-array-by-parity/

class Solution {
    public int[] sortArrayByParity(int[] A) {
        int[] B=new int[A.length];
        int i=0;
        for(int j=0;j<A.length;j++){
            if(A[j]%2==0){
                B[i]=A[j];
                i++;
            }
        }
        for(int j=0;j<A.length;j++){
            if(A[j]%2!=0){
                B[i]=A[j];
                i++;
            }
        }
        return B;
    }
}